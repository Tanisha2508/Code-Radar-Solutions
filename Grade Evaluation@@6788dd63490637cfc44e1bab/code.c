#include <stdio.h>
int main() {
    char h;
    scanf("%d",&h);
    if(h=='A'){
        printf("Excellent");
    }
    else if(h=='B'){
        printf("Good");
    }
    else if(h=='C'){
        printf("Average");
    }
    else if(h=='D'){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}