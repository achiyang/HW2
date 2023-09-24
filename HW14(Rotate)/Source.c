#include <stdio.h>

int rotate(int* input) {
    int total = 0;
    while (*input) {
        total += *input % 10;
        *input /= 10;
    }
    return total * 111;
}

int main() {
    int input;

    scanf("%d", &input);
    printf("%d\n", rotate(&input));

    return 0;
}