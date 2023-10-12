#include <stdio.h>

void swap_characters(int a, int b, char* S) {
    S[a - 1] = S[a - 1] ^ S[b - 1];
    S[b - 1] = S[b - 1] ^ S[a - 1];
    S[a - 1] = S[a - 1] ^ S[b - 1];
}

int main() {
    int a, b;
    char S[11];

    scanf("%d %d %s",&a, &b, S);
    swap_characters(a, b, S);
    printf("%s\n", S);

    return 0;
}

//3 4    a b
//7 4    a+b b
//7 1    a+b b-a
//8 1    2b b-a
//4 1    b b-a
//4 -3   b -a
//4 3    b a
