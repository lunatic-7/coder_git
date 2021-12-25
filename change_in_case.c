#include <stdio.h>
#include <ctype.h>

char *str(char name[], int len)
{
    int j, k;
    printf("Enter the characters you want to change: ");
    scanf("%d", &j);
    scanf("%d", &k);
        if (name[j] >= 'a' && name[j] <= 'z')
        {
            name[j] = toupper(name[j]);
        }
        else if (name[j] >= 'A' && name[j] <= 'Z')
        {
            name[j] = tolower(name[j]);
        }
        
        if (name[k] >= 'a' && name[k] <= 'z')
        {
            name[k] = toupper(name[k]);
        }
        else if (name[k] >= 'A' && name[k] <= 'Z')
        {
            name[k] = tolower(name[k]);
        }
    return name;
}

int main()
{
    int len;
    char *n;
    printf("Enter the length of your string: ");
    scanf("%d", &len);

    char name[len];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);
    n = str(name, len);

    printf("Your name is %s.\n", n);
    return 0;
}