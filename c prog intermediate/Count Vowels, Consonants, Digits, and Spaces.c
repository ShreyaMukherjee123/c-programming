#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;

        if(str[i] >= 'a' && str[i] <= 'z') {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9') digits++;
        else if(str[i] == ' ') spaces++;
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d", vowels, consonants, digits, spaces);
    return 0;
}
