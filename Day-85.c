//Q135: Assign explicit values starting from 10 and print them.

#include <stdio.h>

// Define the Enum with explicit starting value
enum Letters {
    A = 10,  // We explicitly tell it to start at 10
    B,       // Automatically becomes 11
    C        // Automatically becomes 12
};

int main() {
    // Print the integer values of the enum members
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}