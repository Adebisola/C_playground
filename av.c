#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point/ prototype
 * Descrcription: main function prints all the arguments,
 * without using ac.
 * @av:NULL terminated array of strings.
 * @ac:number of items in av.
 * Return: 0.
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
