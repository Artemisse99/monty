#include "monty.h"
/**
 * main - main function
 * @argc: count of arguments
 * @argv: pointer to array containing the arguments
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\12");
		exit(EXIT_FAILURE);
	}

	global.fd = fopen(argv[1], "r");
	if (!global.fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read_file();
	fclose(global.fd);
	return (EXIT_SUCCESS);
}
