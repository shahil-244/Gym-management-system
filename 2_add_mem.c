#include "member.h"

void add_Member()
{
    FILE *fp;
    struct Member m;

    fp = fopen("members.txt", "a");
    if (fp == NULL)
    {
        printf("\n  Error opening file!\n");
        return;
    }

    printf("\n--- ADD NEW MEMBER ---\n");
    printf("Enter Member ID       : ");
    scanf("%lld", &m.id);

    printf("Enter Full Name       : ");
    scanf(" %[^\n]", m.name);

    printf("Enter Age             : ");
    scanf("%d", &m.age);

    printf("Enter Membership Plan : ");
    scanf(" %[^\n]", m.plan);

    printf("Enter Phone Number    : ");
    scanf(" %[^\n]", m.phone);

    fprintf(fp, "ID: %lld\n", m.id);
    fprintf(fp, "Name: %s\n", m.name);
    fprintf(fp, "Age: %d\n", m.age);
    fprintf(fp, "Plan: %s\n", m.plan);
    fprintf(fp, "Phone: %s\n\n", m.phone);

    fclose(fp);
    printf("\n  Member Added Successfully!\n");
}
