#include <stdio.h>

int is_newid(char* S, char* T) {
    int i;

    for (i = 0; S[i] != '\0'; i++) {
        if (S[i] != T[i]) {
            return 0;
        }
    }

    if (T[i + 1] != '\0') {
        return 0;
    }

    return 1;
}

int main() {
    char S[10], T[11];
    scanf("%s %s", S, T);

    if (!is_newid(S, T))
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}