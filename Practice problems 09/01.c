#include <stdio.h>
#include <math.h>

// Define the structure before using it
struct vector {
    int x_compo;
    int y_compo;
};

// Function to calculate the magnitude of the sum of two vectors
float magnitude_of_sum(struct vector v1, struct vector v2) {
    int x, y;
    x = v1.x_compo + v2.x_compo;
    y = v1.y_compo + v2.y_compo;

    // Calculate the magnitude as a floating-point number
    float mag = sqrt(x * x + y * y);
    return mag;
}

int main() {
    struct vector v1 = {5, 7}; // Initialize vector v1
    struct vector v2 = {11, 9}; // Initialize vector v2

    printf("The magnitude of the sum of these two vectors is %.2f\n", magnitude_of_sum(v1, v2));

    return 0;
}
