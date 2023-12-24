#include <stdio.h>

int main()
{
    float part, percentage;
    int total = 2000;
    part = 224.6;

    percentage = (part / total) * 100;

    printf("Part to Total = %.4f", percentage);
}