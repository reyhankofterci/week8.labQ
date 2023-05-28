#include <stdio.h>
#include <string.h>




struct student {
    long int number;
    char name[100];
    char surname[100];
    double midtermgrade;
};

int main()
{
    int maxstudent = 10,maxname=100;

    struct student students[maxstudent];
    int numofstudents = 0;

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i+1);

        printf("Number: ");
        scanf("%ld", &students[i].number);
        getchar();

        printf("Name: ");
        fgets(students[i].name, maxname, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Surname: ");
        fgets(students[i].surname, maxname, stdin);
        students[i].surname[strcspn(students[i].surname, "\n")] = '\0';
        printf("Midterm: ");
        scanf("%lf", &students[i].midtermgrade);

        numofstudents++;
    }

    printf("\nStudents informations :\n");
    for (int i = 0; i < numofstudents; i++)
        {
        printf("Student %d :        Number: %ld        Name: %s        Surname: %s        Midterm: %.2f        \n",i+1,  students[i].number,   students[i].name,   students[i].surname,   students[i].midtermgrade );
        }

    return 0;
}
