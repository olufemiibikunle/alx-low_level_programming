#include "main.h"
#include <stdio.h>

void _puts(char *);

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
		char *str;

			str = "Holberton!";
				_puts(str);
					return (0);
}
/**
 *  * _puts - print a string
 *   * @str:pointer char
 *    * return:void
 *     */
void _puts(char *str)
{
		int i;

			for (i = 0; str[i] != '\0'; i++)
					{
								_putchar(str[i]);
									}
			_putchar('\n');
			return;
}
