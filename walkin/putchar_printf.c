#include <unistd.h>
#include <stdio.h> 

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main()
{
	char *str = "Hello, World";
	int i = 0;

	//Using putchar to print a string
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');


	//Using printf to print a string 
	//
	printf("%s\n", str);
	return (0);
}

