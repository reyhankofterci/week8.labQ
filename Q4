#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    int age;
    int id_number;
};

int main() {

    int num_students;

    printf("how many students are there? ");
    scanf("%d", &num_students);

    struct Student* students = (struct Student*)malloc(num_students * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation error!");
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("%d. Student \n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Student ID: ");
        scanf("%d", &students[i].id_number);
        printf("\n");
    }

    printf("Student Information\n\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d. Student \n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Student ID: %d\n", students[i].id_number);
        printf("\n");
    }

    free(students);

    return 0;
}
