#include <stdio.h>

int main() 
{
    int i ,a, b, lcm;

    i = 1;

    scanf("%d", &a);
    scanf("%d", &b);

    while(1) {
        if(i%a==0 && i%b==0) {
            lcm = i;
            break;
        }
        i++;
    }

    printf("lcm is = %d", lcm);
}