#include <stdio.h>
#include <string.h>

// #define len 10

int chk(char arr[], int sze)
{
    int col = 1;
    for (int i = 0; i < sze; i++)
    {
        if (arr[i] == 'N' && arr[i + 1] == 'e' && arr[i + 2] == 'm' && arr[i + 3] == 'o')
        {
            return col;
        }

        if (arr[i] == ' ')
        {
            col++;
        }

        // if (arr[i][len] == "Nemo")
        // {
        //     return i;
        // }
        
    }
}

int main()
{
    char arr[30] = {"Here is hhh Nemo bro..."};
    int size;
    // printf("Enter the num of words you want to enter: ");
    // scanf("%d", &size);
    // char arr[size][len];
    // size = sizeof(arr) / sizeof(char);
    // printf("Your string is : %s\n", arr);

    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%s", arr[i]);
    // }

    // printf("The size of your arr is: %d\n", size);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%s ", arr[i]);
    // }

    printf("You word is at no: %d\n", chk(arr, 30));

    return 0;
}
