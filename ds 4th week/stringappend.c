#include<stdio.h>
#include<string.h>
int main(){
    char string1[]="Shreya";
    char string2[]="Mukherjee";
    strcat(string1,string2);
    printf("string after append->%s", string1);

}