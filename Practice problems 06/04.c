#include <stdio.h>

// Function to calculate sum and average using pointers
void calculateSumAndAverage(int a, int b, int *sum, float *average) {
    *sum = a + b;  // Calculate sum
    *average = *sum / 2.0;  // Calculate average
}

int main() {
    int num1, num2, sum;
    float avg;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function
    calculateSumAndAverage(num1, num2, &sum, &avg);

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
