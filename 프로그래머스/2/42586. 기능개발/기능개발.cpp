#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> day;
    for(int i=0; i<progresses.size(); i++) {
        day.push_back(ceil((100.0-progresses[i])/speeds[i]));
    }
    int days=day[0];
    int count=1;
    
    for(int i=1; i<day.size(); i++) {
        if(day[i]<=days) count++;
        else {
            answer.push_back(count);
            count=1;
            days=day[i];
        }
    }
    answer.push_back(count);
    return answer;
    
}