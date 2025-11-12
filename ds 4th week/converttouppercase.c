#include <stdio.h>
#include <ctype.h>

int main() {
    char string[] = "Shreya";
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }
    printf("Upper case string is -> %s", string);
    return 0;
}
