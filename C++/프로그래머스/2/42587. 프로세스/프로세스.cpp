#include <string>
#include <vector>
#include <queue>
using namespace std;

int maxNum(vector<int> & v) {
    int maxValue=-1;
    for(int i=0; i<v.size(); i++) {
        if(maxValue<v[i]) maxValue=v[i];
    }
    return maxValue;
}
int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> q; //인덱스 저장 큐 
    for(int i=0; i<priorities.size(); i++) {
        q.push(i);
    }
    while(!q.empty()) {
        int cur=q.front();
        if(priorities[cur]>=maxNum(priorities)) {
            answer++;
            if(cur==location) break;
            priorities[cur]=-1;
            q.pop();
        } else {
            q.pop();
            q.push(cur);
        }
    }
    return answer;
}