#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int j=1;j<=a;j++){
        for(int i=1;i<=a;i++){
            if(j==1){
            printf("*");}
            else if(i==1){
                printf("*");
            }
           
            else if(i==a){
                printf("*");
            }
            else if(j==a){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}