#include <stdio.h>
#include <conio.h>
#define max 100
int main()
{
	char str[max], f = 'a';
	int i;
	printf("\n DFA accepting strings ending with 011");
	printf("\n Input string{0,1}");
	printf("\nEnter the string : ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		switch (f)
		{
		case 'a':
			if (str[i] == '0')
				f = 'b';
			else if (str[i] == '1')
				f = 'a';
			break;
		case 'b':
			if (str[i] == '0')
				f = 'b';
			else if (str[i] == '1')
				f = 'c';
			break;
		case 'c':
			if (str[i] == '0')
				f = 'b';
			else if (str[i] == '1')
				f = 'd';
			break;
		case 'd':
			if (str[i] == '0')
				f = 'b';
			else if (str[i] == '1')
				f = 'a';
			break;
		}
	}
	if (f == 'd')
		printf("\nThe given string is accepted ", f);
	else
		printf("\nThe given string is not accepted ", f);
}
