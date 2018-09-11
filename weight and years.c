/*Demonstrates variables and constants*/
#include<stdio.h>
#include<windows.h>
/*Define a constant to convert from pounds to grams*/
#define GRAMS_PER_POUND 454

/*Define a constant for the start of the next century*/
const int TARGET_YEAR = 2016;

/*Declare the needed variables*/
long weight_in_grams,weight_in_pounds;
int year_of_birth,age_in_2016;

int main(void)
{
    /*Input data from user*/

    printf("Enter your weight in pounds:");
    scanf("%d",&weight_in_pounds);
    printf("Enter your year of birth:");
    scanf("%d",&year_of_birth);

    /*Perform conversions*/

    weight_in_grams = weight_in_pounds *GRAMS_PER_POUND;
    age_in_2016 =TARGET_YEAR - year_of_birth;

    /*Display results on the screen*/

    printf("\nYour weight in grams = %1d",weight_in_grams);
    printf("\nIn 2016 you will be %d years old\n",age_in_2016);
    system("pause");
    return 0;
}
