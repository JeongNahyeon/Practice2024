#include <stdio.h>

int main() {
    char s[10]; // 최대 9글자 + null 문자

    scanf_s("%s", s, sizeof(s));

    for (int i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);
}
