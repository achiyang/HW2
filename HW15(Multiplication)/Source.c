#include <stdio.h>

int get_product(char* S) {
    return (S[0] - '0') * (S[2] - '0');
}

int main() {
    char S[4];

    scanf("%s", S);
    printf("%d\n", get_product(S));

    return 0;
}