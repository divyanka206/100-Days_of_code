//code-77

#include <stdio.h>


int main() {
    int rows, cols, isDistinct = 1;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }
    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

//code-78

#include <stdio.h>

int main() {
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n != m) {
        printf("Not a square matrix\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("%d\n", sum);
    return 0;
}