#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int n;
int num[500001];

int arithmetic_mean(){
    double ans = 0;
    for (int i = 0; i < n; i++){
        ans += num[i];
    }
    return round(ans / n);
} // 산술평균

int median(){
    return num[(n - 1) / 2];
} // 중앙값

int mode2(){
    int result;
    int count = 0;
    int cnt2[8001] = {0};
    for (int i = 0; i < n; i++){
        cnt2[num[i] + 4000]++;
    }
    int max_mode = *max_element(cnt2, cnt2 + 8001);
    for (int i = 0; i < 8001; i++){
        if(cnt2[i] == max_mode){
            count++;
            result = i - 4000;
        }
        if(count == 2){
            break;
        }
    }
    return result;
} // 최빈값

int range(){
    return num[n - 1] - num[0];
} // 범위

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    sort(num, num + n);
    cout << arithmetic_mean() << '\n';
    cout << median() << '\n';
    cout << mode2() << '\n';
    cout << range() << '\n';
    return 0;
}