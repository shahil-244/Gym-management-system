#include "member.h"

int main()
{
    int choice;

    login();

    while (1)
    {
        printf("\n==================================================\n");
        printf("         GYM MEMBERSHIP MANAGEMENT SYSTEM         \n");
        printf("==================================================\n");
        printf("  1. Add Member\n");
        printf("  2. View All Members\n");
        printf("  3. Search Member\n");
        printf("  4. Edit Member Details\n");
        printf("  5. Edit Membership Plan\n");
        printf("  6. Remove Member\n");
        printf("  7. Exit\n");
        printf("==================================================\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_Member();
            break;
        case 2:
            view_Members();
            break;
        case 3:
            search_Member();
            break;
        case 4:
            edit_Member_Details();
            break;
        case 5:
            edit_Membership_Plan();
            break;
        case 6:
            remove_Member();
            break;
        case 7:
            printf("\n==================================================\n");
            printf("               EXITING SYSTEM!!         \n");
            printf("==================================================\n");
            exit(0);
        default:
            printf("\n  Invalid Choice. Please Try Again.\n");
        }
    }

    return 0;
}
