#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==1){
       if(a>=18){
        printf("Eligible");
       }
       else{
        printf("Not Eligible");
       }
    else{
        printf("Non citizen");
    }
    }
    return 0;
}