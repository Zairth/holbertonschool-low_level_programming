#include <stdio.h>
#include <stdlib.h>

/**
*print_name - Write a function that prints a name.
*@name: the name to print
*@f: the function
*Return: void return
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
