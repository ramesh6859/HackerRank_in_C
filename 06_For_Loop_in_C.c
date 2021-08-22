/*
Program		:	"For Loop in C"
Author		:	Ramesh K P
Language	:	C
IDE		    :	Visual Studio
Date		:	22/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	First Line : Input starting number
			        Second Line: Input Last number
Expected Output	:	If last number is less than 9, then print the 
                    English representation of it in lowercase. 
                    Else if and it is an even number, then print "even".
                    Else if and it is an odd number, then print "odd".
*/

#include <stdio.h>
int main()
{
    printf("\n");
    int starting_number, last_number, i;

    printf("Enter Starting Number: ");
    scanf("%d", &starting_number);
    printf("Enter Last Number: ");
    scanf("%d", &last_number);
    for(i=starting_number; i<=last_number; i++)
    {
        if(i<=9)
        {
            switch(i)
            {
            case 0:
                printf("zero\n");
                break;
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            }
        }
        if(i>9)
        {
            if(i%2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
    printf("\n\n");
    return 0;
}