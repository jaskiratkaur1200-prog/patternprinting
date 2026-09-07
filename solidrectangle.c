#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){     // outer loop-> no. of lines
        for (int i = 1; i <= n; i++){ // inner loop-> no. of columns
        printf("*");
    }
        printf("\n");
    }
}
