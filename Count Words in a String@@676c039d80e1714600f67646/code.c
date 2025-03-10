// Your code here...
#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else {
            
            if (!inWord) {
                count++;
                inWord = 1;
            }
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("%d\n",countWords(str));
    return count;
}
