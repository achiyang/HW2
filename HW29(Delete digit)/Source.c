#include <stdio.h>

void del_digit(char* S) {
    int index = 0;

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] < '0' || S[i] > '9') {
            S[index++] = S[i];
        }
    }
    S[index] = '\0';
}

int main() {
    char S[10];

    scanf("%s", S);
    del_digit(S);
    printf("%s\n", S);

    return 0;
}