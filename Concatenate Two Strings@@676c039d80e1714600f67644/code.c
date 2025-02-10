#include <stdio.h>
int main() {
    char c[40];
    char b[23];
    scanf("%s %s",&c,&b);
    char d[100]= c+b;
    printf("%s",d);
    return 0;
}