#include <stdio.h>

int main()
{
    int start, end;
    start = 1;
    end = 10;

    for(int i = start; i <= end; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%4d ", i*j);
        }
        printf("\n");
    }
}