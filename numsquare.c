#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){  //no of lines
        for (int i=1; i<=n; i++){  //no of columns
            printf("%d",i);
        }
        printf("\n");
    }
}