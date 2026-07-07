import java.util.Arrays;

class Solution {
    public int solution(int[] people, int limit) {
        // 몸무게 오름차순 정렬
        Arrays.sort(people);

        int count = 0;
        int left = 0, right = people.length - 1;

        // 양쪽에서 투포인터로 사람 짝짓기 시도
        while (left <= right) {
            // 가장 무거운 사람 + 가장 가벼운 사람을 태울 수 있는 경우
            if (people[right--] + people[left] <= limit) left++;

            // 보트 하나 사용
            count++;
        }

        return count;
    }
}