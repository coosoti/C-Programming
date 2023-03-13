#include <stdio.h>

int stringLength(char *str) {
   if (*str == '\0') {
      return 0;
   } else {
      return 1 + stringLength(str + 1);
   }
}

int main() {
   char *str;
   str = "Charles is My Name";
   int len = stringLength(str);
   printf("%d\n", len);
   return 0;
}

