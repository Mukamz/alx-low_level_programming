#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 0; i <= 8; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar(i + '0');
            putchar(j + '0');
            putchar(',');
            putchar(' ');
        }
    }
    
    // Print the last combination without the trailing comma and space
    putchar('9');
    putchar('0');
    
    return 0;
}

