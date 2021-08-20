/*
Program     :   "Hello World in C"
Author		:	Ramesh K P
Language	:	C
IDE		    :	Codeblocks
Date		:	13/08/2021
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
    printf("Enter any string: \n");
    scanf("%[^\n]s", input_string);
    printf("%s\n", saved_string);
    printf("%s\n", input_string);
    printf("\n");
    return 0;
}