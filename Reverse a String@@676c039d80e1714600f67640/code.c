#include <stdio.h>
int main(){
    char ch[20];
    scanf("%s", ch);

    int size = 0;
    int i = 0;
    
    // Calculate the size of the string
    while (ch[i] != '\0') {
        size++;
        i++;
    }
    
    int l = size - 1;
    
    // Reverse the string
    for (int k = 0; k < size / 2; k++, l--) {
        char temp = ch[k];
        ch[k] = ch[l];
        ch[l] = temp;
    }
    
    // Print the reversed string
    printf("%s", ch);
    
    return 0;
}
