#include <stdio.h>

int main(void) {
    int t;
    int hours, minute, second;

    printf("Enter the seconds: ");
    scanf("%d", &t);

    hours = t / 3600;
    minute = (t % 3600) / 60;
    second = t % 60;

    printf("The sequence of Hours:Minutes:Seconds is: %d:%d:%d\n",
           hours, minute, second);

    return 0;
}
