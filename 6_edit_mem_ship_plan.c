#include "member.h"

void edit_Membership_Plan()
{
    FILE *fp, *temp;
    struct Member m;
    long long int searchID;
    int found = 0;

    fp = fopen("members.txt", "r");
    if (fp == NULL)
    {
        printf("\nNo records found.\n");
        return;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        fclose(fp);
        printf("\n  Temporary file creation failed!\n");
        return;
    }

    printf("\nEnter Member ID to update plan: ");
    scanf("%lld", &searchID);

    while (fscanf(fp, "ID: %lld\nName: %[^\n]\nAge: %d\nPlan: %[^\n]\nPhone: %[^\n]\n\n",
                  &m.id, m.name, &m.age, m.plan, m.phone) == 5)
    {
        if (m.id == searchID)
        {
            found = 1;
            printf("\nCurrent Plan: %s\n", m.plan);
            printf("Enter New Membership Plan: ");
            scanf(" %[^\n]", m.plan);
        }

        fprintf(temp, "ID: %lld\nName: %s\nAge: %d\nPlan: %s\nPhone: %s\n\n",
                m.id, m.name, m.age, m.plan, m.phone);
    }

    fclose(fp);
    fclose(temp);

    remove("members.txt");
    rename("temp.txt", "members.txt");

    if (found)
        printf("\n  Membership Plan Updated Successfully!\n");
    else
        printf("\n  Member ID Not Found.\n");
}
