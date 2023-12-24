#include <stdio.h>

int main() 
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c) {
        printf("max is a = %d", a);
    } else if(b > a && b > c) {
        printf("max is b = %d", b);
    } else if (c > a && c > b) {
        printf("max is c = %d", c);
    } else {
        printf("All numbers is Equal");
    }
}