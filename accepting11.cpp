#include <stdio.h>
#include <conio.h>
#define max 100
main()
{
    char str[max], f = 'a';
    int i;
    printf("Enter the string to be checked: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        switch (f)
        {
        case 'a':
            if (str[i] == '0')
                f = 'a';
            else if (str[i] == '1')
                f = 'b';
            break;
        case 'b':
            if (str[i] == '0')
                f = 'a';
            else if (str[i] == '1')
                f = 'c';
            break;
        case 'c':
            if (str[i] == '0')
                f = 'a';
            else if (str[i] == '1')
                f = 'c';
            break;
        }
    }
    if (f == 'c')
        printf("\nThe given string is accepted on final state %c at the end.", f);
    else
        printf("\nThe given string is not accepted on final state %c.", f);
}
