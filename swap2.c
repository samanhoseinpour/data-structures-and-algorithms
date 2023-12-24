#include <stdio.h>

int main()
{
    int a, b, temp;
    a = 10;
    b = 20;

    printf("[1]: a = %d\t, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;


    printf("[2]: a = %d\t, b = %d\n", a, b);
}