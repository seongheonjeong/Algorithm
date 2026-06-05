#include <string>
#include <vector>

using namespace std;

 int answer = 0;

void dfs(vector<int> &numbers,int target,int index,int current) {
    if(index == numbers.size()) {
        if(target==current) answer++;
        return ;
    }
    
    dfs(numbers,target,index+1,current+numbers[index]);
    dfs(numbers,target,index+1,current-numbers[index]);
}
    
int solution(vector<int> numbers, int target) {
   
    dfs(numbers,target,0,0);
    return answer;
}