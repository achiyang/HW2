#include <stdio.h>

void print_newString(int n, int k, char* S) {
    for (int i = k - 1; i < n; i++) {
        S[i] = S[i] + 32;
    }

    printf("%s", S);
}

int main() {
    int N, K;
    char S[10] = { 0 };

    scanf("%d %d %s", &N, &K, S);
    print_newString(N, K, S);

    return 0;
}