#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    char c = '*';
    char c2 = '+';
    if (ac < 4) {
        return (84);
    }
    c = av[2][0];
    c2 = av[3][0];
    for (int i = 0; i < atoi(av[1]); i++) {
        for (int j = 0; j < i * 2 - 1; j++) {
            if (i % 2 == 0) {
                printf("%c", c);
            } else {
                printf("%c", c2);
            }
        }
        printf("\n");
    }
    return (0);
}