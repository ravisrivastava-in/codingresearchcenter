#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;
void in_b();
void in_e();
void del_b();
void del_e();
void in_s();
void del_s();
void disp_f();
void disp_b();
void search();
void main()
{
    int c;
    char ch;
    do{
        clrscr();
    }
    printf("\n Enter 1 for insert at beginning: ");
    printf("\n Enter 2 for insert at end: ");
    printf("\n Enter 3 for delete from beginning: ");
    printf("\n Enter 4 for delete from end: ");
    printf("\n Enter 5 for delete from specific: ");
    printf("\n Enter 6 for insert at specific: ");
    printf("\n Enter 7 for display in forward: ");
    printf("\n Enter 8 for display in backward: ");
    printf("\n Enter 9 for Searching: ");9+
    printf("\n Enter 10 for Exit ");
    printf("\n Enter Any One Choice");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        in_b();
    break;
    case 2:
        in_e()
    break;
    case 3:
        in_s()
    break;
    case 4:
        del_b()
    break;
    case 5:
        del_e()
    break;
    case 6:
        del_s()
    break;
    case 7:
        disp_b()
    break;
    case 8:
        disp_f()
    break;
    case 9:
        search()
    break;
    case 10:
        exit()
    break;

    default:
        printf("\n Wrong Choice")
    }
    printf("\n Do you want to continue(y/n)");
    fflush(stdin);
    scanf("%c",&ch);
}
while (ch=='y'|| 'Y')
getch();
}