#include <stdio.h>
void decimalToBinary(int n) {
    
    int binary[32]; 
    int index = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    
    while (n > 0) {
        binary[index++] = n % 2;  
        n = n / 2;                 
    }

    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary equivalent: ");
    decimalToBinary(decimal);

    return 0;
}
