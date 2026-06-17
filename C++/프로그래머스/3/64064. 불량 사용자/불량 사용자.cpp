#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int answer = 0;
vector<string> users;
vector<string> banned;
set<string> result;  
bool visited[8];

bool match(string id,string banId) {
  if(id.length()!=banId.length()) return false;
  
  for(int i=0; i<id.length(); i++) {
      if(!(id[i]==banId[i]||banId[i]=='*')) return false;
  }
  return true;
}
void dfs(int depth) {
    if (depth == banned.size()) {
        string temp="";
        for(int i=0; i<users.size(); i++) {
            if(visited[i]) temp +=users[i];
        }
        result.insert(temp);
        return;
    }
    
    for(int i=0; i<users.size(); i++) {
        if(visited[i]==true) continue;
        if(match(users[i],banned[depth])) {
            visited[i]= true;
            dfs(depth+1);
            
            visited[i]=false;
        }
    }
}
int solution(vector<string> user_id, vector<string> banned_id) {
    users=user_id;
    banned=banned_id;
    dfs(0);
    return result.size();
}