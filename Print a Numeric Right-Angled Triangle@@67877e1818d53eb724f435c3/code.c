#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int j=1;j<=a;j++){
        for(int i=1;i<=j;i++){
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}
