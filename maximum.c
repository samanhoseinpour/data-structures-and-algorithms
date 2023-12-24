#include <stdio.h>

int main() 
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b) {
        printf("max is a = %d", a);
    } else if(a == b) {
        printf("Equal");
    } else {
        printf("max is b = %d", b);
    }

}
