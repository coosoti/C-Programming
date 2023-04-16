#include "shell.h"

/**
* shellPrompt - shell prompt
* Return: void
*/

void hshPrompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
