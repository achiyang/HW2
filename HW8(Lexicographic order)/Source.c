#include <stdio.h>
#include <string.h>

int compare_strings(char* s, char* t) {
    return strcmp(s, t);
}

int main() {
    char S[11];
    char T[11];

    // ���ڿ� �Է�
    scanf("%s %s", S, T);

    // ���ڿ� ��
    int result = compare_strings(S, T);

    // ��� ���
    if (result < 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}