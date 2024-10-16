

#include <stdio.h>

int main()
{
    int numbers[10];
    int max = 0, second_max = 0;

    // 10개의 숫자 입력 받기
    printf("10개의 숫자를 입력하세요:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d번째 숫자: ", i + 1);
        scanf_s("%d", &numbers[i]);
    }

    // 최대값과 두 번째 최대값 찾기
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > max) {
            second_max = max; // 현재 최대값을 두 번째 최대값으로 설정
            max = numbers[i];  // 새로운 최대값으로 업데이트
        }
        else if (numbers[i] > second_max && numbers[i] != max) {
            second_max = numbers[i]; // 두 번째 최대값 업데이트
        }
    }

    // 결과 출력
    printf("가장 큰 값: %d\n", max);
    printf("두 번째 큰 값: %d\n", second_max);
}

