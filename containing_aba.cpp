#include <stdio.h>
#include <conio.h>
#define max 100
main()
{
    char str[max], f = 'a';
    int i;
    printf("Enter the string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        switch (f)
        {
        case 'a':
            if (str[i] == 'a')
                f = 'b';
            else if (str[i] == 'b')
                f = 'a';
            break;
        case 'b':
            if (str[i] == 'a')
                f = 'b';
            else if (str[i] == 'b')
                f = 'c';
            break;
        case 'c':
            if (str[i] == 'a')
                f = 'd';
            else if (str[i] == 'b')
                f = 'b';
            break;
        case 'd':
            if (str[i] == 'a')
                f = 'd';
            else if (str[i] == 'b')
                f = 'd';
            break;
        }
    }
    if (f == 'd')
        printf("\nThe given string is accepted at final state.", f);
    else
        printf("\nThe given string is not accepted.", f);
}
