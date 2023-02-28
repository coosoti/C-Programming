#include <stdio.h>

int main()
{
        char *s = "School";
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len = len + 1;
		i++;
	}

	printf("%d\n",len);
        return 0;
}
