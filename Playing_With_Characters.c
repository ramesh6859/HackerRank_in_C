/*
Program		:	"Playing With Characters"
Author		:	Ramesh K P
Language    :	C
IDE		    :	Visual Studio
Date		:	20/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	First Line : Input a character
			        Second Line : Input a word
			        Third Line : Input a sentence
Expected Output	:	First Line : Display the input character
        			Second Line : Display the input word
		        	Third Line : Display the input sentence
*/

#include <stdio.h>
int main() 
{
    printf("\n");
    char input_character;
    char *input_word;
    char input_sentence[50];

    printf("Enter any single character: \n");
    scanf("%c", &input_character);
    printf("Enter any single word: \n");
    scanf("%s", input_word);
    printf("Enter any sentence: \n");
    scanf("%[^\n]s", input_sentence);

    printf("The entered character is: %c\n", input_character);
    printf("The entered word is: %s\n", input_word);
    printf("The entered sentence is: %s\n", input_sentence);

    printf("\n");
    return 0;
}
