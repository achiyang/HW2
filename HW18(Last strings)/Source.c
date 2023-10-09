#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_last_strings(char* input, int len) {
    int is_er = 1;
    char er[2] = "re";
    for (int i = 0; i < 2; i++) {
        if (input[len - 2 - i] != er[i]) {
            is_er = 0;
            break;
        }
    }
    printf("%s\n", is_er ? "er" : "ist");
}

int main() {
    char input[20];

    fgets(input, sizeof(input), stdin);

    print_last_strings(input, strlen(input));

    return 0;
}