#include <stdio.h>

/* copy input to output */

int main() {
    int c;

    // NOTE: This program does not currently prompt the user to provide the desired input (any text is fine)

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    /* the above is equivalent to the following;
     *
     * while ((c = getchar()) != EOF)
     *      put char(c);
     */
}
