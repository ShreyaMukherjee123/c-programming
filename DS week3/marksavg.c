#include <stdio.h>

int main() {
    int marks[20][5];
    int i, j;
    float subAvg[5] = {0};   // Average of each subject
    float stuAvg[20] = {0};  // Average of each student
    int below50 = 0;

    // Input marks
    printf("Enter marks of 20 students (5 subjects each):\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // (a) Find average marks in each subject
    for (j = 0; j < 5; j++) {
        int sum = 0;
        for (i = 0; i < 20; i++) {
            sum += marks[i][j];
        }
        subAvg[j] = (float)sum / 20;
    }

    // (b) Find average marks of each student
    for (i = 0; i < 20; i++) {
        int sum = 0;
        for (j = 0; j < 5; j++) {
            sum += marks[i][j];
        }
        stuAvg[i] = (float)sum / 5;
        if (stuAvg[i] < 50) {
            below50++;
        }
    }

    // Display results
    printf("\nAverage marks in each subject:\n");
    for (j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, subAvg[j]);
    }

    printf("\nAverage marks of each student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: %.2f\n", i + 1, stuAvg[i]);
    }

    printf("\nNumber of students with average marks below 50: %d\n", below50);

    return 0;
}
