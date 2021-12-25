#include <stdio.h>

// Constraints
// 1 <= size,rShift <= 1000000
// 1 <= Arr[i] <= 10^9

int *addArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter index no. %d of arr: ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int showArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int *rShift(int arr2[], int size, int shiftSize)
{
    // int j = 0;

    for (int i = 0; i < size; i++)
    {
        int mag = (size - shiftSize);
        int temp;
        if (i < mag)
        {
            arr2[size - i - 1] = arr2[mag - i - 1];
        }
    }
    return arr2;
}

int * final(int arr[], int arr2[], int size, int shiftSize)
{
    for (int i = 0; i < size; i++)
    {
        int mag = (size - shiftSize);
        if (i >= mag)
        {
            arr2[i - mag] = arr[i];
        }
    }
    return arr2;
}

int main()
{
    int size, shiftSize;
    int *n;
    printf("Enter the size of your array: ");
    scanf("%d", &size);

    printf("The no. times of right shift: ");
    scanf("%d", &shiftSize);

    int arr[size];
    int m[size];
    // int fin[size];

    n = addArr(arr, size); // n is keep on updating, So, I needed to create its copy as m.
    for (int i = 0; i < size; i++)
    {
        m[i] = n[i];
    }
    printf("\n");
    printf("Your array: \n");
    showArr(n, size);
    n = rShift(n, size, shiftSize); // arr2
    // showArr(n, size);  // Partial shift
    n = final(m, n, size, shiftSize);
    printf("So, The final output is: \n");
    showArr(n, size); // Completed.

    return 0;
}