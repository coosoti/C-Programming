#include <stdio.h>

int stringLength(char *str) {
   int len = 0;
   while (str[len] != '\0') {
      len++;
   }
   return len;
}

int main() {
   char *str = "Hello, world!";
   int len = stringLength(str);
   printf("The length of '%s' is %d.\n", str, len);
   return 0;
}

