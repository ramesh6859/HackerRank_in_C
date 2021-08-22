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
    char input_word[50];
    char input_sentence[50];

    printf("Enter any single character: ");
    scanf("%c", &input_character);
    printf("Enter any single word: ");
    scanf("%19s", input_word);
    printf("Enter any sentence: ");
    scanf(" %[^\n]s", input_sentence);

    printf("\nThe entered character is: %c", input_character);
    printf("\nThe entered word is: %s", input_word);
    printf("\nThe entered sentence is: %s", input_sentence);

    printf("\n\n");
    return 0;
}
