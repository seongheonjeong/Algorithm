#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer; 
    int y=-1;
    int x=0;
    int num=1;
    int arr[1001][1001]={};
    for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                if(i%3==0) {
                    y++;
                } else if(i%3==1) {
                    x++;
                } else if(i%3==2) {
                    x--; y--;
                } 
                arr[y][x]=num++;
            }
        }
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            answer.push_back(arr[i][j]);
        }
    }
    return answer;
}