#include <stdio.h>
#include <string.h>

int compare_strings(char* s, char* t) {
    return strcmp(s, t);
}

int main() {
    char S[11];
    char T[11];

    // 문자열 입력
    scanf("%s %s", S, T);

    // 문자열 비교
    int result = compare_strings(S, T);

    // 결과 출력
    if (result < 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}