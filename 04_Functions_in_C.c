/*
Program		:	"Functions in C"
Author		:	Ramesh K P
Language	:	C
IDE		    :	Visual Studio
Date		:	22/08/2021
mail		:	rameshofficial75@gmail.com
Expected Input	:	First Line : Input the number of elements
			        Second Line : Input the elements
Expected Output	:	First Line : Display the largest number from the elements
*/

#include<stdio.h>
int largest_number(int [], int);
int main()
{
    printf("\n");

    int elements=0, i=0;
    int array_elements[100],maximum_number=0;

    printf("Enter the number of elements of array: ");
    scanf("%d",&elements);
    printf("Enter %d elements of the array:\n", elements);
    for(i=0; i<elements; i++)
        scanf("%d",&array_elements[i]);
    
    maximum_number = largest_number(array_elements, elements);
    printf("Maximum element in the array is: %d",maximum_number);

    printf("\n\n");
    return 0;
}

int largest_number(int array[], int size)
{
    int *array_address;
    int maximum=0, i=0;

    array_address = &array[0];
    for(i=0; i<size; i++)
    {
        if(maximum <= *array_address)
        {
            maximum = *array_address;
            array_address++;
        }
    }
    return maximum;
}