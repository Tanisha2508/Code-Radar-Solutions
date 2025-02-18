#include<stdio.h>
int main(){
    int n,result=0,q,rem;
    printf("enter");
    scanf("%d",&n);
    q=n;
    while (q!=0){
        rem = q%10;
        result = result*10 +rem;
        q=q/10;
    }
    if (result == n)
    {printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}