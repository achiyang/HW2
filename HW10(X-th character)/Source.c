#include <stdio.h>

char get_char(int* n, int* x) {
    return 64 + *x / *n + (*x % *n ? 1 : 0);
}

int main() {
    int n, x;
    char ch;

    // 입력 데이터
    scanf("%d %d", &n, &x);

    // 문자열의 x 번째 위치한 문자 획득    
    ch = get_char(&n, &x);
    printf("%c\n", ch);

    return 0;
}