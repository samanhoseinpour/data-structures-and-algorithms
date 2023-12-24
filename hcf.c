#include <stdio.h>

int main() 
{
    int a, b, hcf;

    scanf("%d", &a);
    scanf("%d", &b);

    while(a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    hcf = a;

    printf("HCF is %d", hcf);
}