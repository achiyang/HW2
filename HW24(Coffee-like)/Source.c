#include <stdio.h>

int is_coffeelike(char* S) {
    if (S[2] == S[3] && S[4] == S[5]) {
        return 1;
    }
    return 0;
}

int main() {
    char S[7];

    scanf("%s", S);

    if (!is_coffeelike(S))
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}