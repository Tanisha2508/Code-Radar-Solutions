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
    int count;
    char str[100];
    fgets(str, sizeof(str), stdin);

    count = countWords(str);
    printf("%d\n", count);
    
    return 0;
}

