#include "member.h"

void remove_Member()
{
    printf("\n--- DELETE OPTIONS ---\n");
    int number = 0;
    printf("  1. Delete Separately\n");
    printf("  2. Delete All\n\n");
    printf("Enter your choice(1 or 2): ");
    scanf("%d",&number);

    if(number == 1)
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

        printf("\nEnter Member ID to remove: ");
        scanf("%lld", &searchID);

        while (fscanf(fp, "ID: %lld\nName: %[^\n]\nAge: %d\nPlan: %[^\n]\nPhone: %[^\n]\n\n",
                    &m.id, m.name, &m.age, m.plan, m.phone) == 5)
        {
            if (m.id == searchID)
            {
                found = 1;
                continue;
            }

            fprintf(temp, "ID: %lld\nName: %s\nAge: %d\nPlan: %s\nPhone: %s\n\n",
                    m.id, m.name, m.age, m.plan, m.phone);
        }

        fclose(fp);
        fclose(temp);

        remove("members.txt");
        rename("temp.txt", "members.txt");

        if (found == 1)
        {
            printf("\n  Member Record Removed Successfully!\n");
        }
        else
        {
            printf("\n  Member ID Not Found.\n");
        }
    }

    else if (number == 2)
    {
        FILE *fp;
        fp = fopen("members.txt", "w");
        fclose(fp);
        printf("\n  All Deleted Successfully!\n");
    }

    else
    {
        printf("\n  Invalid Input!  \n");
    }

}
