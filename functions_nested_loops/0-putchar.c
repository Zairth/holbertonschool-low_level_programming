#include <unistd.h>
#include "main.h"

int _putchar(char c);

int main(void)
{
	int i;
	char x[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	for (i = 0; i != '\0'; i++)
		_putchar(x[i]);
	_putchar('\n');
	return(0);
}
