#include <stdio.h>
#include "main.h"

/**
 * main - prints no of arguments passed to program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])

{
	(void) argv;
		printf("%d\n", argc - 1);

	return (0);
}
