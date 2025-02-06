#include <stdio.h>
int main() {
    char h;
    scanf("%c",&h);
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
    else if(h=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}