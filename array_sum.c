#include <stdio.h>

void addArr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter your element no. %d: ", i);
        scanf("%d", &array[i]);
    }
}

int showArr(int array[], int size)
{
    int sum = 0;
    int output;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
        sum = sum + array[i];
    }
    printf("\n");
    return sum;
}

int output(int array[], int size, int sum)
{
    int temp;
    // Sorting array...
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Largest no: %d\n", array[0]);
    return sum % array[0];
}

int main()
{
    int size, n, m;
    printf("Enter the size of your array: ");
    scanf("%d", &size);
    int array[size];

    addArr(array, size);

    n = showArr(array, size);
    printf("Sum: %d\n", n);
    m = output(array, size, n);

    printf("Reversed: ");
    showArr(array, size);
    printf("Sum %% largest no. is: %d", m); // trick to print %.
    return 0;
}