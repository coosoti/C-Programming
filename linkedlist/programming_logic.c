#include <stdio.h>

int string_length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char *reverse_string(char *str) {
    int length = string_length(str);
    char reversed_str[length+1];
    reversed_str[length] = '\0';
    for (int i = length-1; i >= 0; i--) {
        reversed_str[length-1-i] = str[i];
    }
    char *result = reversed_str;
    return result;
}

int count_vowels(char *str) {
    int length = string_length(str);
    int count = 0;
    for (int i = 0; i < length; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "Hello, world!";
    char *reversed_str = reverse_string(str);
    printf("%s", reversed_str);
    int num_vowels = count_vowels(str);
    printf("Number of vowels in '%s': %d\n", str, num_vowels);
    return 0;
}

