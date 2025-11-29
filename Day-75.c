//code-125

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}