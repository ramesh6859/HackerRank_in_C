/*
Program     :   "Hello World in C"
Author		:	Ramesh K P
Language	:	C
IDE		    :	Visual Studio
Date		:	20/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	Any string. Inputed numbers and special characters
			        are taken as strings
Expected Output	:	First Line : Display the string "Hello, World!"
			        Second Line : Display the inputed String
*/
#include <stdio.h>
int main()
{
    printf("\n");
    char *saved_string = "Hello, World!";
    char input_string[50];
    printf("Enter any string: ");
    scanf("%[^\n]s", input_string);
    printf("\n%s", saved_string);
    printf("\n%s", input_string);
    printf("\n\n");
    return 0;
}