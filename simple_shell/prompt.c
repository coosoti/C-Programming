#include "shell.h"

/**
* hshPrompt - hsh prompt
* Return: void
*/

void hshPrompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
