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
    d= a/b;
    printf("%d",d);
    }
    else if(c=='*'){
    d= a*b;
    printf("%d",d);
    }
    else if(c=='-'){
    d= a-b;
    printf("%d",d);
    }
    else{
        if(b == 0){
            printf("error");
        }
        else{
            d = a/b;
            printf("%d",&d);
        }
    }
return 0;
}