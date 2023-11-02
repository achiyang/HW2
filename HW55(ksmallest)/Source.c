#include <stdio.h>
#include <math.h>

int main() {
    int N;

    scanf("%d", &N);

    int result = 0;

    int power = 1;
    while (N) {
        int digit = (N % 2 == 1) ? 2 : 0;
        result += digit * power;
        power *= 10;
        N >>= 1;
    }

    printf("%d\n", result);

    return 0;
}