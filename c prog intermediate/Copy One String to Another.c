#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter string: ");
    gets(str1);
    int i = 0;
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied string: %s", str2);
    return 0;
}
