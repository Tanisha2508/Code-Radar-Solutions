#include <stdio.h>
int main() {
    int h,t;
    scanf("%d %d",&h,&t);
    if(h<t){
        printf("%d",t);
    }
    else{
        printf("%d",h);
    }
    return 0;
}