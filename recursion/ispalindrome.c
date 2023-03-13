#include <stdio.h>
#include <string.h>

int ispalindrome(char *str, int start, int end) {
   if (start >= end) {
      return 1; // base case, the string is a palindrome
   } else {
      if (str[start] == str[end]) {
         return ispalindrome(str, start + 1, end - 1); // recursively check the next characters
      } else {
         return 0; // the string is not a palindrome
      }
   }
}

int main() {
   char *str = "racecar";
   int len = strlen(str);
   int palindrome = ispalindrome(str, 0, len - 1);
   if (palindrome) {
      printf("%s is a palindrome.\n", str);
   } else {
      printf("%s is not a palindrome.\n", str);
   }
   return 0;
}

