#include "main.h"

#include <stdio.h>
/**
 *  * print_number -print number putchar
 *   * @n:integer
 *    * Return: void
 *     */
 

int main(void)
{
	  int n;
	    int a[5];
	      int *p;

	        a[2] = 1024;
		  p = &n;
		    
		    *(p + (sizeof(n) + 1)) = 98;

		      printf("a[2] = %d\n", a[2]);
		        return (0);
}
