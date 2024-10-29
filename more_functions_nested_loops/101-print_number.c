#include "main.h"

/**
*print_number - prints an integer.
*@n: the number to print
*Return: void return
*/
void print_number(int n)
{
	int MIN_hit = 0;
	int count = 8; /* Milliard = 10 chiffres. Milliard etant deja imprimer et uniter aussi, count sera egale au nombre de fois ou on devra imprimer les chiffres de n */
	int modulo = 1000000000;
	int division = 100000000;

	if (n == -2147483648) /* == INT_MIN */
	{
		n++; /* Permet de ne pas depasser le INT_MAX lors de la conversion en positif  */
		MIN_hit++; /* De base a 0, passe a 1 si n est egal a INT_MIN, permet donc de rajouter 1 a l'unite de n (a la fin du code) au cas ou n = INT_MIN */
	}
	if (n < 0)
	{
		n = n * (-1); /* Permet de convertir n d'un entier negatif a un entier positif pour les prochaines structures conditionnelles */
		_putchar('-'); /* Imprime le signe ' - ' dans le cas ou n est negatif de base */
	}
	if (n != 0) 
	{
		if (n > modulo)
			_putchar((n / 1000000000) + '0'); /* Si n est plus grand que le modulo (1 milliard), alors il imprime l'unite du milliard */
		else
		{
			while (modulo / 10 > n) /* tant que modulo / 10 est superieur a n, alors il divise modulo et division par 10, et decremente count de 1 pour obtenir le bon depart d'affichage et de calcul */
			{
				modulo /= 10;
				division /= 10;
				count--;
			}
		}
		while (count != 0) /* tant que count est different de 0, il imprime les chiffres de n et divise par 10 le modulo et la division entre chaque iteration, count est reduit de 1 a chaque iteration */
		{
			_putchar(((n % modulo) / division) + '0');
			modulo /= 10;
			division /= 10;
			count--;
		}
		n %= 10; /* permet d'obtenir l'uniter de n dans le cas ou n est different de 0 */
	}
	if (MIN_hit == 1) /* si MIN_hit a ete incrementer, alors il est passer de 0 a 1, et l'unite de n a ete decrementer de 1. Alors re incremente de 1 avant le putchar */
		n++;
	_putchar(n + '0'); /* imprime l'uniter */
}
