#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_ZONe(char* input, int len) {
    int cnt = 0;
    while (input = strstr(input, "ZONe")) {
        input += 4;
        cnt++;
    }
    printf("%d", cnt);
}

int main() {
    char input[13];

    fgets(input, sizeof(input), stdin);

    find_ZONe(input, strlen(input));

    return 0;
}