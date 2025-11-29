// code-5

#include <stdio.h>
int main () {
    float celcius, fahrenheit;
    printf("enter temp in celcius");
    scanf("%f", &celcius);
    fahrenheit = (celcius*9/5) + 32;
    printf("temp in fahrenheit is %f \n", fahrenheit);
    return 0;
}

// code-6

#include <stdio.h>
int main () {
    int a ,b, swap;
    printf("enter two number");
    scanf("%d %d", &a, &b);
    swap = b;
    b = a;
    printf("after swap: %d %d \n", swap, a);
    return 0;
}
