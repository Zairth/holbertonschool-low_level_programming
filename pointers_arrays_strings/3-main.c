#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Holberton"; 
    char s2[] = "Holbeerton"; 
    _strcmp(s1, s2);

    printf("%d\n", _strcmp(s1, s2));
    return (0);
}
