#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    if(c =='+'){
    d= a+b;
    printf("%d",&d);
    }
    else if(c=='/'){
    d= a/b;
    printf("%d",&d);
    }
    else if(c=='*'){
    d= a*b;
    printf("%d",&d);
    }
    else{
    d= a-b;
    printf("%d",&d);
    }
  

    return 0;
}