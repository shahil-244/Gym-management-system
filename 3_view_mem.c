#include "member.h"

void view_Members()
{
    FILE *fp;
    struct Member m;
    int count = 0;

    fp = fopen("members.txt", "r");
    if (fp == NULL)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n==================================================\n");
    printf("                  MEMBER LIST                     \n");
    printf("==================================================\n");


    while (fscanf(fp, "ID: %lld\nName: %[^\n]\nAge: %d\nPlan: %[^\n]\nPhone: %[^\n]\n\n",
                  &m.id, m.name, &m.age, m.plan, m.phone) == 5)
    {
        printf("ID   : %lld\n", m.id);
        printf("Name : %s\n", m.name);
        printf("Age  : %d\n", m.age);
        printf("Plan : %s\n", m.plan);
        printf("Phone: %s\n", m.phone);
        printf("--------------------------------------------------\n");
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("\n==================================================\n");
        printf("                NO RECORDS FOUND!                     \n");
        printf("==================================================\n");

    }
    else {
        printf("  Total Members: %d\n", count);
    }
}
