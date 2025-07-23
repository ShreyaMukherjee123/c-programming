#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    printf("Enter ID, Name, and Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);
    printf("Student Info:\nID: %d\nName: %s\nMarks: %.2f", s.id, s.name, s.marks);
    return 0;
}
