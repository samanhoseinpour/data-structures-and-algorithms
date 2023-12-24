#include <stdio.h>

int main()
{
    int end, sum;
    scanf("%d", &end);

    for (int i = 1; i <=end; i++) {
        sum += i; 
    }

    printf("The value of sum is: %d", sum);
}