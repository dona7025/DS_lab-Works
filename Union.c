#include <stdio.h>
#include <string.h>

union student
{
            char name[20];
            char subject[20];
            float percentage;
};

void main()
{
    union student record1;
    union student record2;

    // assigning values to record1 union variable
       strcpy(record1.name, "Raju");
       strcpy(record1.subject, "Maths");
       record1.percentage = 86.50;

       printf(" Record1 values: \n");
       printf(" Name       : %s \n", record1.name);
       printf(" Subject    : %s \n", record1.subject);
       printf(" Percentage : %f \n\n", record1.percentage);

    // assigning values to record2 union variable
       printf("Union record2 values example\n");
       strcpy(record2.name, "Mani");
       printf(" Name       : %s \n", record2.name);

       strcpy(record2.subject, "Physics");
       printf(" Subject    : %s \n", record2.subject);

       record2.percentage = 99.50;
       printf(" Percentage : %f \n", record2.percentage);
       getch();
}
