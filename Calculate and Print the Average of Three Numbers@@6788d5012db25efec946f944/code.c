#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double average=(a+b+c)/3.0;//we can also use float
    printf("Average: %.2lf",average);
    return 0;
}