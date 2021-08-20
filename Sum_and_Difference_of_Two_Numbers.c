/*
Program     :   Sum and Difference of Two Numbers
Author		:	Ramesh K P
Language	:	C
IDE		    :	Visual Studio
Date		:	20/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	First Line : First integer.
                    Second Line : Second Integer.
                    Third Line : First floating point number.
                    Fourth Line : Second floating point number. 
Expected Output	:	First Line : Sum of two integers.
                    Second Line : Difference of two integers.
                    Third Line : Sum of two floating point numbers.
                    Fourth Line : Difference of two floating point numbers.
*/

#include <stdio.h>
int main()
{
    printf("\n");
    
    int first_integer, second_integer;
    float first_float, second_float;

    printf("Enter first integer: \n");
    scanf("%d", &first_integer);
    printf("Enter second integer: \n");
    scanf("%d", &second_integer);
    printf("Enter first floating point number: \n");
    scanf("%f", &first_float);
    printf("Enter second floating point number: \n");
    scanf("%f", &second_float);

    printf("Sum of integers: %d\n", first_integer + second_integer);
    printf("Difference of integers: %d\n", first_integer - second_integer);
    printf("Sum of floating point numbers: %.2f\n", first_float + second_float);
    printf("Difference of floating point numbers: %.2f\n", first_float - second_float);

    printf("\n");
    return 0;
}