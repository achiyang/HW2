#include <stdio.h>
#include <string.h>
#include <ctype.h>

void make_plural(char* input, int len) {
    if (input[len - 2] == 's') {
        input[len - 1] = 'e';
        input[len] = 's';
        input[len + 1] = '\0';
    }
    else {
        input[len - 1] = 's';
    }
    printf("%s", input);
}

int main() {
    char input[11];

    fgets(input, sizeof(input), stdin);
    make_plural(input, strlen(input));

    return 0;
}