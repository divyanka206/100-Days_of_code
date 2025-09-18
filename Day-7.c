// code-14
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("vowel\n");
        } else {
            printf("consosnant\n");
        }
    return 0;
}

// code-13

#include <stdio.h>
int main () {
    int year;
    printf("enter a year");
    scanf("%d", &year);
    if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0) ) {
        printf("leap year %d\n", year);
    } else {
        printf("not a leap year %d \n", year);
    }
    return 0;
}



