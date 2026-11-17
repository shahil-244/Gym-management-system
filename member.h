#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Member
{
    long long int id;
    char name[50];
    int age;
    char plan[30];
    char phone[20];
};

void login();
void add_Member();
void view_Members();
void search_Member();
void edit_Member_Details();
void edit_Membership_Plan();
void remove_Member();
