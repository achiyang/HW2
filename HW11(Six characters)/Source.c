#include <stdio.h>
#include <string.h>

void print_new_string(char* S) {
    int len = 0;
    for (int i = 0; S[i] != '\0'; i++, len++);
    for (int i = 0; i < 6 / len; i++) {
        printf("%s", S);
    }
    return;
}

int main() {
    char S[4]; // ���ڿ� S, ���̴� 1~3 �̹Ƿ� �ִ� ���̴� 3 + NULL ����('\0')=4

    scanf("%s", S);
    print_new_string(S);

    return 0;
}