
#include <stdio.h>
#include <string.h>
#define maxname 100


int main() {

struct Student
{
    char name[100];
    int age;
    int number;
};


struct Student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the information of student %d:\n", i+1);


        printf("Name: ");
        fgets(students[i].name, maxname, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &students[i].age);
        getchar();

        printf("Student number: ");
        scanf("%ld", &students[i].number);
        getchar();

        printf("\n");
    }


    return 0;
}
