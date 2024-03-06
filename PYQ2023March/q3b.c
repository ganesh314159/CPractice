#include <stdio.h>

int main() {
    int num1, num2;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Output before swapping
    printf("Before swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swapping the numbers using the swap function
    int* swappedValues = swap(&num1, &num2);

    // Output after swapping
    printf("After swapping:\n");
    printf("First number: %d\n", swappedValues[0]);
    printf("Second number: %d\n", swappedValues[1]);

    return 0;
}

int* swap(int *a, int *b) {
    static int swapped[2];
    swapped[0] = *b;
    swapped[1] = *a;
    return swapped;
}
