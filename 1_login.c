#include "member.h"

void login() {
    char user[30], pass[30];

    printf("\n==================================================\n");
    printf("                  LOGIN SYSTEM                    \n");
    printf("==================================================\n");

    while (1)
    {
        printf("Enter User ID : ");
        scanf("%s", user);

        printf("Enter Password: ");
        scanf("%s", pass);

        if (strcmp(user, "shahil") == 0 && strcmp(pass, "1111") == 0)
        {
            printf("\n  Login Successful! Access Granted.\n");
            break;
        }
        else
            {
            printf("\n  Invalid Input! Access Denied.\n\n");
        }
    }
}
