#include<vector>
#include<queue>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int solution(vector<vector<int>> maps)
{
    int n=maps.size();
    int m=maps[0].size();
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0]=true;
    int answer = 1;
    while(!q.empty()) {
        int st=q.size();
        while(st--) {
            auto [x,y] = q.front();
            q.pop();
            if(x==n-1 && y==m-1) return answer;
            for(int i=0; i<4; i++) {
                int tempX=x+dx[i];
                int tempY=y+dy[i];
                if(tempX>=n || tempY>=m || tempX<0 || tempY<0) continue;
                if(visited[tempX][tempY] || maps[tempX][tempY] == 0) continue;
                visited[tempX][tempY]=true;
                q.push({tempX,tempY});
            }
        }
        answer++;
    }
    return -1;
}