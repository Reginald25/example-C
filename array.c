#include<stdio.h>
#include<windows.h>

/*Define and declare a structure to hold the data.*/
/*It contains one float variable and two char array*/

struct data
{
 float amount;
 char fname[30];
 char lname[30];
}rec;

int main(void)
{
    /*Input the data from the keyboard*/

    printf("Enter the donor's first and last names,\n");
    printf("separated by a space:");
    scanf("%s %s",rec.fnamne,rec.lname);

    printf("\nEnter the donation amount:");
    scanf("%f",&rec.amount);

    printf("\nDonor %s %s gave $%.2f.\n",rec.fname,rec.lname,rec.amount);

    system("pause");

    return 0;
}
