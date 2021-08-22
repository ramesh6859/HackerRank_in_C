/*
Program		:	"Pointers in C"
Author		:	Ramesh K P
Language	:	C
IDE		    :	Visual Studio
Date		:	22/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	First Line : Input first number
			        Second Line: Input second number
Expected Output	:	First Line : Display sum of two numbers
			        Second Line : Display absolute difference of two numbers
*/

#include <stdio.h>
void sum_and_absolute_difference(int *,int *);
int main()
{
    printf("\n");

    int first_number=0, second_number=0;
    int *address_first_number = &first_number;
    int *address_second_number = &second_number;

    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);
    sum_and_absolute_difference(address_first_number, address_second_number);
    printf("Sum = %d\n", first_number);
    printf("Absolute Difference: %d", second_number);
    printf("\n\n");
    return 0;
}
void sum_and_absolute_difference(int *address_first_number,int *address_second_number)
{
    int sum, diff;
    sum = *address_first_number + *address_second_number;
    diff = *address_first_number - *address_second_number;
    if(diff<0)
        diff=-diff;
    *address_first_number = sum;
    *address_second_number = diff;
}