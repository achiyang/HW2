#include <stdio.h>

void move_right(char* S) {
    for (int i = 0; i < 3; i++) {
        S[3 - i] = S[2 - i];
    }
    S[0] = '0';
}

int main() {
    char S[5]; // ���ڿ� S, ���̴� 4 + NULL ����('\0') = 5

    scanf("%s", S);
    move_right(S);
    printf("%s\n", S);

    return 0;
}