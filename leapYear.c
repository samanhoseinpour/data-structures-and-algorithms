#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("This year is a Leap year --> %d", year);
    } else {
        printf("This year isn't a Leap year --> %d", year);
    }
}