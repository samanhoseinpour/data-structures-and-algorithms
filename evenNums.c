#include <stdio.h>

int main()
{
    int start, end;
    start = 0;
    end = 20;

    for(int i = 0; i <= end; i++) {
        if(i % 2 == 0) {
            printf("%2d is even, \n", i);
        }
    }
}