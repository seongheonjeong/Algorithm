#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> st;
    for(char c:s) {
        if(c=='(') st.push(c); 
        else if(c==')') {
            if(st.empty()) return false;
            st.pop();
        }
    }
    if(st.empty()) answer=true;
    else answer=false;

    return answer;
}