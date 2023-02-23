// C program to display 7 days a weeks
      
#include <stdio.h>
int main() {
    int weeks = 3, days_in_week = 7;
    for (int i = 1; i <= weeks; ++i) {
        printf("Week: %d\n", i);

        for (int j = 1; j <= days_in_week; ++j) {
            printf("    Day: %d\n", j);
        }
    }
    return 0;
}
