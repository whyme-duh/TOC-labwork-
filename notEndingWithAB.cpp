#include <stdio.h>
#include <conio.h>
#define max 100
main()
{
	char str[max], f = 'a';
	int i;
	printf("Enter the string : ");
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
				f = 'b';
			else if (str[i] == 'b')
				f = 'a';
			break;
		}
	}
	if (f == 'b' || f == 'a')
		printf("\nThe given string is accepted as on final state %c.", f);
	else
		printf("\nThe given string is not accepted.", f);
}
