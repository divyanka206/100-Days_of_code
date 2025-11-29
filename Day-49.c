//code-97

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') str[i] -= ('a' - 'A');
            printf("%c.", str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}

//code-98

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    int start = 0, wordCount = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (wordCount < 2) {
                char ch = str[start];
                if (ch >= 'a' && ch <= 'z') ch -= ('a' - 'A');
                printf("%c.", ch);
            } else {
                for (int j = start; j < i; j++)
                    printf("%c", str[j]);
            }
            if (str[i] == ' ') printf(" ");
            start = i + 1;
            wordCount++;
        }
    }
    printf("\n");
    return 0;
}