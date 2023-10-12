#include <stdio.h>

void reverse_string(char* input) {
    int len = 0;

    while (input[len] != '\0' && input[len] != '\n') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        input[i] = input[i] ^ input[len - 1 - i];
        input[len - 1 -i] = input[i] ^ input[len - 1 - i];
        input[i] = input[i] ^ input[len - 1 - i];
    }

    input[len] = '\0';
}

int main() {
    char input[10] = { 0 };

    fgets(input, sizeof(input), stdin);
    reverse_string(input);

    printf("%s\n", input);

    return 0;
}