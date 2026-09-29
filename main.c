#include <stdio.h>

int main(void) {
    int a, b;

    printf("input two integers : ");
    scanf("%i %i", &a, &b);

    //c= a+b;
    //printf("%i+%i=%i\n",a,b, c);
    //이렇게 코드 작성도 가능함 대신 int 부분에 int a,b,c; 로 수정 필요

    printf("+ result is %i\n", a + b);
    printf("- result is %i\n", a - b);
    printf("* result is %i\n", a * b);
    printf("/ result is %i\n", a / b);
    printf("%% result is %i\n", a % b);

    return 0;
}