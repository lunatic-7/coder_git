#include <stdio.h>

char threes(char str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    int len;
    printf("Enter the length of your string: ");
    scanf("%d", &len);

    char str[len];

    printf("Enter your string: ");
    scanf("%s", &str);
    int size = sizeof(str)/sizeof(char);
    threes(str, size);
    return 0;
}