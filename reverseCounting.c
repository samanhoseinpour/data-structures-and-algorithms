#include <stdio.h>

int main() 
{
    int start, end;

    scanf("%d", &start);
    scanf("%d", &end);

    for(int i = end; i >= start; i--) {
        printf("%d, ", i);
    }
}