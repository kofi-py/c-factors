#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isFactor(int a, int b) {
    if (b % a == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (isFactor(i, n)) {
            printf("%d", i);
            printf("\n");
        }
    }
    return 0;
}
