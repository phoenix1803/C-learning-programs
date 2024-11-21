#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *students = (Student*)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        printf("Enter name, age, and marks of student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d: %s, %d years old, Marks: %.2f\n", i + 1, students[i].name, students[i].age, students[i].marks);
    }

    free(students);
    return 0;
}
