

#include <stdio.h>
#include <string.h>

int main()
{

        char grade[10];                // 학년
        char studentID[10];      // 학번 (최대 9글자 + null 문자)
        char name[30];           // 이름 (최대 29글자 + null 문자)
        char s[30] = "";
        // 입력 받기
        printf("학년 : ");
        scanf_s("%s", grade, sizeof(grade)); // 학년 입력 받기
        printf("학번 : ");
        scanf_s("%s", studentID, sizeof(studentID)); // 학번 입력 받기
        printf("이름 : ");
        scanf_s("%s", name, sizeof(name)); // 이름 입력 받기
       
        strcat_s(s, grade);
        strcat_s(s, "학년 ");
        strcat_s(s, studentID);
        strcat_s(s, " ");
        strcat_s(s, name);
        strcat_s(s, " ");
        
        printf("%s\n", s);
        

 }



