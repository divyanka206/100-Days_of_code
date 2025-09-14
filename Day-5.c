// code-9

#include <stdio.h>
#include <math.h>
int main () {
    int P, R, T;
    float SI, CI;
    printf("enter principle, rate and time");
    scanf("%d %d %d", &P, &R, &T);
    SI = (P*R*T)/100;
    printf("simple interest is %f \n", SI);
    CI = P * (pow((1 + (R / 100.0)), T)) - P;
    printf("compound interest is %f \n", CI);
    return 0;
}

// code-10

#include <stdio.h>
int main () {
    int t;
    printf("enter time in seconds");
    scanf("%d", &t);
    int hours = t / 3600;
    int minutes = t % 60;
    int seconds = t % 60;
    printf("hours : minute : seconds is %d : %d : %d \n" , hours, minutes, seconds);
    return 0;

}