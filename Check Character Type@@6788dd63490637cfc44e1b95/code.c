#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&c);
    if((ch>=a && chh<=z)||(ch>=A && ch<=Z)){
        if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    else if(ch>=0 && ch<=9){
        printf("Digit\n");
    }
    else{
        printf("Specail Character\n");
    }
    
    return 0;
}