// code-21

#include <stdio.h>
int main () {
    int i;
    printf("enter number(1-12):");
    scanf("%d", &i);

    switch (i) {
        case 1:
            printf("january, 31 days\n");
                break;
        case 2:
            printf("february, 28 days\n");
                break;
        case 3:
            printf("march, 31 days\n");
                break;
        case 4:
            printf("april, 30 days\n");
                break;
        case 5:
            printf("may, 31 days\n");
                break;
        case 6:
            printf("june, 30 days\n");
                break;
        case 7:
            printf("july, 31 days\n");
                break;
        case 8:
            printf("august, 31 days\n");
                break;
        case 9:
            printf("september, 30 days\n");
                break;
        case 10:
            printf("october, 31 days\n");
                break;
        case 11:
            printf("november, 30 days\n");
                break;
        case 12:
            printf("december, 31 days\n");
                break;
        default:
            printf("invalid input(1-12)\n");
                break;
    }
    return 0;
}


// code-22

#include <stdio.h>
int main () {
    int CP, SP, profit, loss;
    printf("enter cost price:");
    scanf("%d", &CP);
    printf("enter selling price:");
    scanf("%d", &SP);
    if (SP > CP) {
        profit = (SP - CP) * 100 / CP;
        printf("Profit = %d%%\n", profit);
    } else if (CP > SP) {
        loss = (CP - SP) * 100 / CP;
        printf("Loss = %d%%\n", loss);
    } else {
        printf("No profit No loss\n");
    }
    return 0;
}