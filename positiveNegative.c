#include <stdio.h>

int main() 
{
    int a;

    if(a > 0) {
        printf("Number %d is Positive", a);

    } else if(a == 0) {
        printf("Number is %d", a);
    } 
    else {
        printf("Number %d is negative", a);
    };
}