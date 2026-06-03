#include <string>
#include <vector>
#include <set>

using namespace std;

bool solution(vector<string> phone_book) {
    set<string> s1;
    bool answer = true;
    for(string s : phone_book ) {
        s1.insert(s);
    }
    for(string &phone : phone_book) {
        for(int i=1; i<phone.size(); i++) {
            string s2 = phone.substr(0,i);
            if(s1.count(s2)!=0) answer = false;
        }
    }
    return answer;
}