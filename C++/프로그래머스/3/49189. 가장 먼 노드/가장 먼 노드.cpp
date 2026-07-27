#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    
    vector<vector<int>> v(n+1);
    vector<int> dist(n+1,-1);
    int answer = 0;
    
    for(int i=0; i<edge.size(); i++) {
        int a= edge[i][0];
        int b= edge[i][1];
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    dist[1]=0;
    
    while(!q.empty()) {
        int cur=q.front();
        q.pop();
        
        for(int next:v[cur]) {
            if(dist[next]== -1) {
                dist[next]=dist[cur]+1;
                q.push(next);
            }
        }
    }
    
    int maxDist = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > maxDist) {
            maxDist = dist[i];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (dist[i] == maxDist) {
            answer++;
        }
    }
    
    return answer;
}