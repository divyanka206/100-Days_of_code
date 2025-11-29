//code-89

#include <stdio.h>

int main() {
    char str[1000], ch;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch)
            count++;
    }
    printf("%d\n", count);
    return 0;
}

//code-90

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        printf("%c", str[i]);
    }
    return 0;
}