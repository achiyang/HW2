#include <stdio.h>

int is_FiftyFifty(char* S) {
    int alphabet[26] = { 0 };

    for (int i = 0; i < 4; i++) {
        alphabet[S[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] != 0 && alphabet[i] != 2) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char S[5];
    scanf("%s", S);

    if (is_FiftyFifty(S))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}