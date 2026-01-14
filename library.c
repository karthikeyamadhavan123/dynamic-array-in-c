#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to the library of C!\n");

    int size = 10;
    int currLen = 0;

    int *newArray = (int *)malloc(size * sizeof(int));
    if (newArray == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (1)
    {
        int value;
        printf("Enter the number here (-1 to exit): ");
        scanf("%d", &value);

        if (value == -1)
            break;

        // Resize if full
        if (currLen == size)
        {
            size = size * 2;
            printf("Resizing array to %d\n", size);

            int *temp = realloc(newArray, size * sizeof(int));
            if (temp == NULL) {
                printf("Reallocation failed\n");
                free(newArray);
                return 1;
            }

            newArray = temp;
        }

        newArray[currLen] = value;
        printf("Stored: %d\n", newArray[currLen]);

        currLen++;
    }

    printf("\nFinal Array:\n");
    for (int i = 0; i < currLen; i++)
        printf("%d ", newArray[i]);

    free(newArray);
    return 0;
}
