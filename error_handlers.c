#include "header.h"

/**
 * print_error - shows error message
 * @input: this is the input recieved from user
 * @counter: does the counting of shell loop
 * @argv: Arguments before program starts
 */

void print_error(char *input, int counter, char **argv)
{
	char *er;

	PRINT(argv[0]);
	PRINT(": ");
	er = _itoa(counter);
	PRINT(er);
	free(er);
	PRINT(": ");
	PRINT(input);
	PRINT(": not found\n");
}

/**
 *  _prerror - this is the one that prints the  custom Error
 * @argv: shows the arguments before program starts(argv[0] == Shell Program Name)
 * @c: represents the count of error
 * @cmd: Array of parsed command strings
 */

void _prerror(char **argv, int c, char **cmd)
{
	char *er = _itoa(c);

	PRINT(argv[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": ");
	PRINT(cmd[0]);
	PRINT(": Illegal number: ");
	PRINT(cmd[1]);
	PRINT("\n");
	free(er);
}

/**
 * error_file - Prints custom Error
 * @argv: Arguments before program starts(argv[0] == Shell Program Name)
 * @c: Erepresents the count of error
 */
void error_file(char **argv, int c)
{
	char *er = _itoa(c);

	PRINT(argv[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": Can't open ");
	PRINT(argv[1]);
	PRINT("\n");
	free(er);
}
