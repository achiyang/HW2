#include <stdio.h>

void del_digit(char* S) {
    int i = 0;
    for (int j = 0; S[j] != '\0'; j++) {
        if (S[j] < '0' || S[j] > '9') {
            S[i++] = S[j];
        }
    }
    S[i] = '\0';
}

int main() {
    char S[10];

    scanf("%s", S);
    del_digit(S);
    printf("%s\n", S);

    return 0;
}