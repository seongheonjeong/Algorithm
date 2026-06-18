#include <string>
#include <vector>
#include <sstream>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int index=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]==' ') index=0;
        else {
            if(index%2==0) {
                s[i]=toupper(s[i]);
            } else if(index%2==1)s[i]=tolower(s[i]);
            index++;
        }
        answer+=s[i];
        
    }
    return answer;
}