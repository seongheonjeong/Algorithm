#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack<int> s;
    s.push(0);
    for(int i=1; i<prices.size(); i++) {
        
        while(!s.empty()&&prices[s.top()]>prices[i]) {
            int past_time=s.top();
            s.pop();
            answer[past_time]=i-past_time;
        }   
        s.push(i);
    }
    while(!s.empty()) {
        answer[s.top()]=prices.size()-1-s.top();
        s.pop();
    }
    
    return answer;
}