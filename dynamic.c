#include <stdio.h>
#define SIZE 100

void printArr(int *arr, int currLen)
{

    int i = 0;
    while (i < currLen)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}

void pushBack(int *arr, int value, int currLen)
{
    if (currLen == SIZE)
        return;
    arr[currLen] = value;
}

int popBack(int *arr, int currLen)
{
    if (currLen == 0)
        return -1;
    int popValue = arr[currLen - 1];
    return popValue;
}

void insertFromIndex(int *arr, int currLen, int index, int value)
{

    if (index < 0 || index > currLen)
    {
        printf("index supplied greater than length");
        return;
    }
    for (int i = currLen; i > index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
}

void deleteAtIndex(int *arr, int currLen, int index)
{
    if
        if (index < 0 || index > currLen)

        {
            printf("index supplied greater than length");
            return;
        }

    for (int i = index; i < currLen - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int value;
    int currLen = 0;
    int array[SIZE];
    while (1)
    {
        printf("Enter the val :");
        scanf("%d", &value);
        if (value == -1)
            break;
        pushBack(array, value, currLen);
        currLen++;
    }
    printArr(array, currLen);
    int res = popBack(array, currLen);
    printf("popped us was %d\n", res);
    currLen--;
    insertFromIndex(array, currLen, 3, 56);
    currLen++;
    printArr(array, currLen);
    deleteAtIndex(array, currLen, 2);
    currLen--;
    printArr(array, currLen);
    return 0;
}