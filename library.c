// dynamic array implementation

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    printf("Welcome to the library of c!\n");

    int size = 10;

    int newArray[size];
    int *ptr = newArray;

    int currLen = 0;

    while (1)
    {
        int value;
        char command[5];
        printf("Enter the number here : ");
        scanf("%d", &value);

        if (currLen < size / 2)
        {
            // printf("val %d\n",value);
            // printf("Current size is %d\n", size);
            newArray[currLen] = value;     
            printf("this is in the old array %d\n", newArray[currLen]); 
            currLen++;
        }

        else
        {
            size = size * 2;
            printf("After enlarge size is %d\n", size);
            int bigArray[size];
            for (int i = 0; i < currLen; i++)
            {
                bigArray[i] = newArray[i];
                printf("this is in the new array %d\n", bigArray[i]);
            }
            bigArray[currLen] = value;
            currLen++;
            ptr = bigArray;
        }
    }
}