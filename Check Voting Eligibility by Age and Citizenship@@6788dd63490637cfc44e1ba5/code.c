#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=18){
       if(a==1){
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