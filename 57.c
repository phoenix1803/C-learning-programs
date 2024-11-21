#include <stdio.h>

typedef struct {
    char name[50];
    char role[10];  // "Manager" or "Worker"
    float salary;
} Employee;

int main() {
    Employee employees[] = {
        {"Alice", "Manager", 50000},
        {"Bob", "Worker", 20000},
        {"Charlie", "Manager", 55000},
        {"David", "Worker", 18000}
    };

    FILE *managersFile = fopen("managers.txt", "w");
    FILE *workersFile = fopen("workers.txt", "w");

    for (int i = 0; i < 4; i++) {
        if (strcmp(employees[i].role, "Manager") == 0) {
            fprintf(managersFile, "%s %.2f\n", employees[i].name, employees[i].salary);
        } else {
            fprintf(workersFile, "%s %.2f\n", employees[i].name, employees[i].salary);
        }
    }

    fclose(managersFile);
    fclose(workersFile);
    return 0;
}
