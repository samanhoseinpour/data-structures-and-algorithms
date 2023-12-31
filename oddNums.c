#include <stdio.h>

int main() 
{
    int start, end;
    start = 0;
    end = 20;

    for(int i = start; i <= end; i++) {
        if(i % 2 != 0) {
            printf("%2d is odd, \n", i);
        }
    }
}