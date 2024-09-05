

#include <stdio.h>

int main()
{
    printf("화씨       섭씨\n");
    printf("==============\n");

    double f1 = 100.0;
    double f2 = 80.0;
    double f3 = 60.0;

    double C1 = (5.0 / 9.0) * (f1 - 32);
    double C2 = (5.0 / 9.0) * (f2 - 32);
    double C3 = (5.0 / 9.0) * (f3 - 32);

    printf("%f    %f\n", f1, C1);
    printf("%f    %f\n", f2, C2);
    printf("%f    %f\n", f3, C3);

}

