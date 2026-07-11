#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long left=1,right=(long long)*max_element(times.begin(), times.end()) * n;
    long long mid=0;
    while(left<=right) {
        mid=(right+left)/2;
        long long time = 0;
        for(int i=0; i<times.size(); i++) {
            time += mid/times[i];
        }
        if(time>=n) {
            answer = mid;
            right = mid-1;
        }
        else if(time <n) left = mid+1;
    }
    return answer;
}