#include <stdio.h>

int main() {
    int n;

    // 출력할 단 수 입력받기
    printf("출력할 단 수를 입력하세요: ");
    scanf_s("%d", &n);

    // 구구단 출력
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    
}