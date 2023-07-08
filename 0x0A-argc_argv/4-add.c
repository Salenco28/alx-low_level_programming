#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digits
 * @str: array string
 *
 * Return: Always 0 (Success).
 */
int check_num(char *str)
{
	/*Variables declaration*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if the string there are digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - This prints the name of the program
 * @argc: This count arguments
 * @argv: Arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Variables declaration*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*This goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to integer*/
			sum += str_to_int;
		}

		/*If one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

