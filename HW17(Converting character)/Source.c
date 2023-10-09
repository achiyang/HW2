#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convert_char(char* input, int len) {
    for (int i = 0; i < len; i++) {
        if (!isalpha(input[i])) {
            input[i] = ' ';
        }
    }
}

int main() {
    char input[100];
    int len;

    fgets(input, sizeof(input), stdin);

    len = strlen(input);
    convert_char(input, len);
    printf("%s\n", input);

    return 0;
}