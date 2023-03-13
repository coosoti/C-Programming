#include <stdio.h>
#include <string.h>

int ispalindrome(char *str, int len) {
   int start = 0;
   int end = len - 1;
   while (start < end) {
      if (str[start] != str[end]) {
         return 0; // the string is not a palindrome
      }
      start++;
      end--;
   }
   return 1; // the string is a palindrome
}

int main() {
   char *str = "racecar";
   int len = strlen(str);
   int palindrome = ispalindrome(str, len);
   if (palindrome) {
      printf("%s is a palindrome.\n", str);
   } else {
      printf("%s is not a palindrome.\n", str);
   }
   return 0;
}

