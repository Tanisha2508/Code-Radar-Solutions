#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        for(int a=1;a<=n;a++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}