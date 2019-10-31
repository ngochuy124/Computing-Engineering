#include <stdio.h>

int main(int argc, char const *argv[]) {

    unsigned int num;
    char status = 0;

    do {
        printf("Please enter a number from 1 to 15: ");
        scanf("%i", &num);
    } while (num < 1 || num > 15);
    return 0;
}
