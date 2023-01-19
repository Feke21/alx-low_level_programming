#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), k = 1;
			       	break;
			case 'i':
				printf("%d", va_arg(valist, int)), k = 1;
		 		break;
			case 'f':
				printf("%f", va_arg(valist, double)), k = 1;
				break;
			case 's':
				str = va_arg(valist, char *), k = 1;
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}	
