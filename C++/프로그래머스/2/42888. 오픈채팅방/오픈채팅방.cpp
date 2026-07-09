#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string,string> m1;
    for(int i=0; i<record.size(); i++) {
        stringstream ss(record[i]);
        string a="",b="",c="";
        ss>>a>>b>>c;
        if(a=="Enter" || a=="Change") m1[b]=c;
    }
    
    for(int i=0; i<record.size(); i++) {
        stringstream ss(record[i]);
        string a="",b="",c="";
        ss>>a>>b>>c;
        if(a=="Enter") answer.push_back(m1[b]+"님이 들어왔습니다.");
        else if(a=="Leave") answer.push_back(m1[b]+"님이 나갔습니다.");
    }
    return answer;
}