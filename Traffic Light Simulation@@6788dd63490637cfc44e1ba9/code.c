#include <stdio.h>
int main() {
    char R,G,Y;
    scanf("%c %c %c",&R,&G,&Y);
    if(R=='Stop'){
        printf("Stop");    
    }
    else if(G=='Go'){
        printf("Go");
    }
    else if(Y=='Slow Down'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}