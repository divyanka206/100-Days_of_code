//code-124

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100], ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    if (src == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error creating destination file!");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destination);
    return 0;
}