#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int arr[1001] = {};
    int start[1001] = {};
    int end[1001] = {};
    int max_length = 0;  // 수정: 최대 길이를 나타내는 변수 이름 변경
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        start[i] = 1;
        end[i] = 1;
    }

    // 증가하는 부분 수열의 길이를 계산하여 start 배열에 저장
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                start[i] = max(start[j] + 1, start[i]);
            }
        }
    }
    
    // 감소하는 부분 수열의 길이를 계산하여 end 배열에 저장
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j > i; j--)
        {
            if (arr[i] > arr[j])
            {
                end[i] = max(end[j] + 1, end[i]);
            }
        }
    }

    // 모든 인덱스에 대해 가장 긴 바이토닉 부분 수열의 길이를 찾음
    for (int i = 0; i < N; i++)
    {
        max_length = max(start[i] + end[i] - 1, max_length);  // 수정: -1을 추가하여 겹치는 인덱스 제거
    }
    cout << max_length << '\n';  // 수정: -1을 제거하고 결과 출력
}
