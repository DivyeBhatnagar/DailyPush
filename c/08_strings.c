#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, vowels = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }
    
    printf("\nLength: %d\n", length);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", length - vowels);
    
    return 0;
}
