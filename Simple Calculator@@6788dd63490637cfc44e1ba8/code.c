#include <stdio.h>
int main() {
    float a,b;
    char c;
    int d;
    scanf("%f %f %c",&a,&b,&c);
    if(c =='+'){
    d= a+b;
    printf("%d",d);
    }
    else if(c=='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    else if(c=='*'){
    d= a*b;
    printf("%d",d);
    }
    else if(c=='-'){
    d= a-b;
    printf("%d",d);
    }
    else
    {
        if(b!=0)
        {
        d = a/b;
        printf("%d",d);
        }
        else{
            printf("error");
        }
    }
    return 0;
}