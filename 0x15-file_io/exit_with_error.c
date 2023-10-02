/**
* exit_with_error - Prints out the error messages
* @code: Prints the error code (number)
* @message: Prints the error message
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

void exit_with_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
