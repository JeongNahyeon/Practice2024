#include <stdio.h>

int main() {
    int n;

    // 자연수 입력 받기
    printf("자연수 입력: ");
    scanf_s("%d", &n);

    // 위쪽 삼각형 출력
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 아래쪽 역삼각형 출력
    for (int i = n - 1; i >= 1; i--) {
        // 공백 출력
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

}
