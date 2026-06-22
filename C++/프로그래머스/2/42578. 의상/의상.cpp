#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> m;
    int count[30]={};
    for(int i=0; i<clothes.size(); i++) {
        m[clothes[i][1]]++;
    }
    int idx=0;
    for(auto& p : m) {
        count[idx++]=p.second+1;
    }
    for(int i = 0; i < idx; i++) {
        answer *= count[i];
    }
    return answer-1;

}