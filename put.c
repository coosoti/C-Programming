#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
        char src[12] = "Aticleworld";
        // The destination string szie is 14
        char dest[12] = " ";
        // copying n bytes of src into dest.
        strncpy(dest, src, 5);
       // printf("Copied string: %s\n", dest);
        while (dest[i] != '\0')
	{
		putchar(dest[i]);
		i++;
	}
        putchar('\n'); 
        return 0;
}
