#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i <= 3) {
            printf("$ ");
        }
        else if (i >= 4 && i <= 7) {
            printf("* ");
        }
        else {
            printf("$ ");
        }

        i++;
    }

    return 0;
}