#include <string>
#include <vector>
#include <queue>
using namespace std;

bool visited[50];


bool diff(string a,string b) {
    int count=0;
    for(int i=0; i<a.size(); i++) {
        if(a[i]!=b[i]) count++;
    }
    return count == 1;
}
int solution(string begin, string target, vector<string> words) {\
    int answer = 0;
    queue<pair<string,int>> q;
    q.push({begin,0});
    while(!q.empty()) {
        auto [cur,step] = q.front();
        q.pop();
        if(target==cur) return step;
        for(int i=0; i<words.size(); i++) {
            if(diff(cur,words[i]) && !visited[i]) {
                 visited[i] = true;
                 q.push({words[i], step + 1});
            }
        }
    }
    return 0;
}