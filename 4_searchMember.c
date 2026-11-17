#include "member.h"

void search_Member()
{
    FILE *fp;
    struct Member m;
    long long int searchID;
    int found = 0;

    fp = fopen("members.txt", "r");
    if (fp == NULL)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\nEnter Member ID to search: ");
    scanf("%lld", &searchID);

    while (fscanf(fp, "ID: %lld\nName: %[^\n]\nAge: %d\nPlan: %[^\n]\nPhone: %[^\n]\n\n",
                  &m.id, m.name, &m.age, m.plan, m.phone) == 5)
    {
        if (m.id == searchID)
        {
            printf("\n  Record Found:\n");
            printf("--------------------------------------------------\n");
            printf("ID   : %lld\n", m.id);
            printf("Name : %s\n", m.name);
            printf("Age  : %d\n", m.age);
            printf("Plan : %s\n", m.plan);
            printf("Phone: %s\n", m.phone);
            printf("--------------------------------------------------\n");
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found != 1)
    {
        printf("\n==================================================\n");
        printf("    No Records Found For Member ID: %lld\n", searchID);
        printf("==================================================\n");
    }
}
