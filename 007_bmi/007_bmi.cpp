// 007_bmi.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    float weight, height;

    printf("몸무게(kg) : ");
    scanf_s("%f", &weight);
    printf("키(cm) : ");
    scanf_s("%f", &height);

    height /= 100; // m 단위로 변환


    float bmi;
    printf("bmi : ");
    printf(" % .1f\t", (weight / (height * height)));


}


