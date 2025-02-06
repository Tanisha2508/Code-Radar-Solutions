#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%3==0){
        if(a%5==0){
            printf("Divisible by Both");
        }
        else{
            printf(" Not Divisible");
        }
    else{
        printf("Divisible by 3");
    }
    }
    return 0;
}