/*
Program     :   Sum and Difference of Two Numbers
Author		:	Ramesh K P
Language	:	C
IDE		    :	Visual Studio
Date		:	20/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	First Line : Two integers.
                    Second Line : Two floating point numbers. 
Expected Output	:	First Line : Print the sum and difference of 
                    both integers.
                    Second Line : Print the sum and difference of both float (scaled to decimal place) separated by a space on the second line. 
*/

#include <stdio.h>
int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf(" ");
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n", c+d, c-d);

    printf("\n\n");
    return 0;
}