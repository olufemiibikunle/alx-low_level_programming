#include "main.h"


/**
* _puts - Prints a string
* @str: The string to print
*
* Return: void
*/


void MyPrint(const char *str)
{
	  int len = strlen(str) + 1;
	    char *temp = alloca(len);

	      int i;
	        for (i = 0; i < len; i++)
			  {
				      char ch = str[i];
				          if (ch == '\n')
						        break;
					      temp[i] = ch;
					        }

		  temp[i] = 0;

		    puts(temp);
}
