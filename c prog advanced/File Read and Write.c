#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "w");
    fprintf(f, "Hello File!\n");
    fclose(f);

    f = fopen("data.txt", "r");
    char c;
    while ((c = fgetc(f)) != EOF)
        putchar(c);
    fclose(f);
    return 0;
}
