#include <stdio.h>
int main() {
    char v,c,a;
    scanf("%c %c %c",&v,&c,&a);
    if(v=='R'){
        printf("Stop");    
    }
    else if(c=='G'){
        printf("Go");
    }
    else if(a=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}