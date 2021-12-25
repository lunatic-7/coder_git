#include <stdio.h>

int yearCheck(int num)
{
    int years[num];
    for (int i = 1; i <= num; i++)
    {
        printf("Enter year no. %d: ", i);
        scanf("%d", &years[i]);
    }
    printf("\n");

    for (int i = 1; i <= num; i++)
    {
        if (years[i] % 4 == 0)
        {
            printf("Year: %d is leap year!\n", years[i]);
        }
        else
        {
            printf("This isn't leap year!\n");
        }
    }
}

int main()
{
    int num;
    printf("Enter the number of years you want to ask for: ");
    scanf("%d", &num);

    yearCheck(num);
    return 0;
}