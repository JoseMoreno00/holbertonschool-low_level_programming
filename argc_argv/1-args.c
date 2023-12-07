#include <stdio.h>
#include "main.h"
/**
* main - main
*
* @args: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
