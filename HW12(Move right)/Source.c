#include <stdio.h>

void move_right(char* S) {
    for (int i = 1; i < 4; i++) {
        S[4 - i] = S[3 - i];
    }
    S[0] = '0';
    S[4] = '\0';
}

int main() {
    char S[5];

    scanf("%s", S);
    move_right(S);
    printf("%s\n", S);

    return 0;
}