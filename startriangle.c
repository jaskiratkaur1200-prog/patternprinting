#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){  //no of lines
        for (int j=1; j<=i; j++){  //no of columns
            printf("*");
        }
        printf("\n");
    }
}