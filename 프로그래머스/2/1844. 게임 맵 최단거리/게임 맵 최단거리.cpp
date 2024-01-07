#include <vector>
#include <queue>
#define X first
#define Y second
using namespace std;

int answer[101][101];
bool check[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;

int solution(vector<vector<int>> maps) {
    int n = maps.size();
    int m = maps[0].size();
    q.push({0, 0});
    check[0][0] = true;

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int tempX = cur.X + dx[i];
            int tempY = cur.Y + dy[i];

            if (tempX < 0 || tempX >= n || tempY < 0 || tempY >= m) continue;
            if (maps[tempX][tempY] != 1 || check[tempX][tempY]) continue;

            answer[tempX][tempY] = answer[cur.X][cur.Y] + 1;
            q.push({tempX, tempY});
            check[tempX][tempY] = true;
        }
    }

    if(answer[n-1][m-1]==0)
        return -1;
    else
        return answer[n-1][m-1]+1;
}
