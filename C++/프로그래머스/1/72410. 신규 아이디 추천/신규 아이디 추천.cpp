#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string new_id) {
     for(auto&s : new_id) {
            s = tolower(s);
        }
        
        string str1;
        for(auto&s : new_id) {
            if(islower(s) || isdigit(s) || s == '-' || s == '_' || s == '.') str1+=s;
        }
        
        string str2;
        for(auto&s : str1) {
            if(s=='.' && !str2.empty() && str2.back() == '.') continue;
            str2+=s;
        }
        
        if(!str2.empty() && str2.front()=='.') str2.erase(0,1);
        if(!str2.empty() && str2.back()=='.') str2.pop_back();
        
        if(str2.empty()) str2+='a';
        
        if(str2.length()>=16) {
            str2=str2.substr(0,15);
            if(str2.back()=='.') str2.pop_back();
        }
        
        if(str2.length()<=2) {
            char s=str2.back();
            while(str2.length()<3) {
                str2+=s;
            }
        }
        return str2;
}