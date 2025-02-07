#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
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
    else{
    d= a-b;
    printf("%d",d);
    }
  

    return 0;
}