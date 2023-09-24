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
    char S[4]; // 문자열 S, 길이는 1~3 이므로 최대 길이는 3 + NULL 문자('\0')=4

    scanf("%s", S);
    print_new_string(S);

    return 0;
}