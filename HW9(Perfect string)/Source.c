#include <stdio.h>
#include <ctype.h>

int has_upper_case(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            return 1;
        }
    }
    return 0;
}

int has_lower_case(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            return 1;
        }
    }
    return 0;
}


int is_perfect_string(const char* str) {
    int perfect = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                perfect = 0;
            }
        }
    }

    return has_lower_case(str) & has_upper_case(str) & perfect;
}


int main() {
    char input[101];

    scanf("%s", input);

    if (is_perfect_string(input)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}