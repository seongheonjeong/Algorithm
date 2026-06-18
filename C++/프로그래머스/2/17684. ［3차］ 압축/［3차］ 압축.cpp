#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string,int> m;
    for(char c='A'; c<='Z'; c++) {
        string word(1,c);
        m[word]=c-'A'+1;
    }
    int next_index=27;
    string str="";
    str+=msg[0];
    for(int i=1; i<msg.length(); i++) {
        
        char temp=msg[i];
        if(m.count(str+temp)) {
            str+=temp;
        } else {
            answer.push_back(m[str]);
            m[str+temp]=next_index;
            next_index++;
            str="";
            str+=temp;
        }
    }
    answer.push_back(m[str]);
    return answer;
}