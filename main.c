#include <stdio.h>

int main(void) {
    int sec, hour, min, remain_sec;

    printf("input the second : ");
    scanf("%i", &sec);

    hour = sec / 3600;
    min = (sec % 3600) / 60;
    remain_sec = sec % 60;

    printf("The time for %i second is %i : %i : %i\n", sec, hour, min, remain_sec);

    return 0;
}