#include <stdio.h>

char get_char(int* n, int* x) {
    return 64 + *x / *n + (*x % *n ? 1 : 0);
}

int main() {
    int n, x;
    char ch;

    // �Է� ������
    scanf("%d %d", &n, &x);

    // ���ڿ��� x ��° ��ġ�� ���� ȹ��    
    ch = get_char(&n, &x);
    printf("%c\n", ch);

    return 0;
}