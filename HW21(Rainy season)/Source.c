#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_max_raindays(char* input) {
    int max = 0;
    int cnt = 0;

    for (int i = 0; ; i++) {
        if (input[i] == 'R') {
            cnt++;
        }
        else if (input[i] == 'S') {
            if (max < cnt) {
                max = cnt;
            }
            cnt = 0;
        }
        else {
            if (max < cnt) {
                max = cnt;
            }
            break;
        }
    }

    printf("%d", max);
}

int main() {
    char input[11];

    fgets(input, sizeof(input), stdin);
    get_max_raindays(input);

    return 0;
}