#include <string>
#include <vector>
#include <queue>
using namespace std;
bool visited[201];
queue<int> q;
void bfs(int i,vector<vector<int>>& computers,int n) {
    q.push(i);
    visited[i]=true;
    while(!q.empty()) {
        int num=q.front();
        q.pop();
        for(int j=0; j<n; j++) {
            if(computers[num][j] ==1 && !visited[j]) {
            q.push(j);
            visited[j]=true;
        }
        }
    }
}
    

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<computers.size(); i++) {
        if(!visited[i]) {
        bfs(i,computers,n);
        answer++;
        }
    }    
    return answer;
    
}