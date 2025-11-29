//code-81

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}

//code-82

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}