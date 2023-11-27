#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int index = 0;
    char result[100];

    while (N) {
        int digit = (N % 2 == 1) ? 2 : 0;
        result[index++] = digit + '0';
        N >>= 1;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    return 0;
}