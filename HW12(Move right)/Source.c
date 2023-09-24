#include <stdio.h>

void move_right(char* S) {
    for (int i = 0; i < 3; i++) {
        S[3 - i] = S[2 - i];
    }
    S[0] = '0';
}

int main() {
    char S[5]; // 문자열 S, 길이는 4 + NULL 문자('\0') = 5

    scanf("%s", S);
    move_right(S);
    printf("%s\n", S);

    return 0;
}