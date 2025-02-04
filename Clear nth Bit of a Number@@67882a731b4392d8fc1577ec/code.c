#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a<<b)&0x80000000;
    printf("%d",c);
    return 0;
}