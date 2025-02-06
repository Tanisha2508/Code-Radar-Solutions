#include <stdio.h>
int main() {
    char v;
    scanf("%c",&v);
    if(v=='R'){
        printf("Stop");    
    }
    else if(v=='G'){
        printf("Go");
    }
    else if(v=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}