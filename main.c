#include <stdio.h>

int main(void) {
    int sec, min, remain;

    printf("input the second : ");
    scanf("%i", &sec);

    min = sec / 60;
    remain = sec % 60;

    printf("the time is %i : %i\n", min, remain);
    //변수 지정없이 printf("the time is %i : %i\n",sec / 60, sec % 60) 으로도 가능

    return 0;
}