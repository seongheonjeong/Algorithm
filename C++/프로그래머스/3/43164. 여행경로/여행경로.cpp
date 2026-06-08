#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    unordered_map<string,vector<string>> graph;
    for(const auto&ticket:tickets) {
        graph[ticket[0]].push_back(ticket[1]);
    }
    
    for(auto& p:graph) {
        sort(p.second.begin(),p.second.end(),greater<string>());
    }
    
    stack<string> s;
    s.push("ICN");
    while(!s.empty()) {
        string cur = s.top();
        if(graph.find(cur)==graph.end() || graph[cur].empty()) {
            answer.push_back(cur);
            s.pop();
        } else {
            s.push(graph[cur].back());
            graph[cur].pop_back();
        }
    }
    reverse(answer.begin(),answer.end());
    return answer;
}