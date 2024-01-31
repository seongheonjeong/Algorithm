#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dp1[1000001],dp2[1000001];
int solution(vector<int> money) {
    
    int index = money.size() - 1;
    dp1[0]=money[0];
    dp1[1]=dp1[0];
    for(int i=2; i<money.size()-1; i++)
    {
        dp1[i]=max(dp1[i-2]+money[i],dp1[i-1]);
    }
    dp2[0]=0;
    dp2[1]=money[1];
    for(int i=2; i<money.size(); i++)
    {
       dp2[i]=max(dp2[i-2]+money[i],dp2[i-1]); 
    }
    return max(dp2[index],dp1[index-1]);
}