// Write a program that reverses a string
//
// sample input  char *str = "hello"; sample output "olleh"
//
//Pseudocode
//Transverse the string from first character to the last character => length the string
//At the character we print each character backwards
//
//
#include <stdio.h>

char *revstr(char *str);

int main()
{
	char *str = "hello";
	printf("%s", revstr(str));
	printf("\n");
	return 0;
}`

char *revstr(char *str)
{
	int i = 0, len = 0;
	// str ends in '\0'
	while (str[i] != '\0')
	{
		len++; //length of the string
		i++;
	}
	printf("%d\n", len);
	// 'h', 'e', 'l', 'l', 'o', '\0' 
	for (i = len - 1; i >= 0; i--)
	{
		str[len-1-i];
	}
	return 
}

