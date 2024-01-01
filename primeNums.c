#include <stdio.h>

int main() 
{
    int num, isPrime;

    scanf("%d", &num);
    isPrime = 1;

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            isPrime = 0;
        } 
    }
    if(isPrime) {
        printf("%d is a prime number \n", num);
    } else {
        printf("%d isn't a prime number \n", num);
    }
}