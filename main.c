/*
    Student: Shayne McNeil
    Student ID: W0454809

*/

#include <stdio.h>

int main() {

    // Float variable to store radius of circle
    float radius = 5;
    // Double variable to store the constant PI
    const double pi = 3.14159;
    // Calculate circumference of circle 
    double circumference = 2 * pi * radius;

    // Convert floating-point circumference to integer explicity and store to new variable 
    int intCircumference = (int)circumference;
    // Print both original floating-point and integer values for circumference
    printf("Circumference as floating point number: %f\n", circumference);
    printf("Circumference as an integer: %d\n", intCircumference);

    // Declare a double to store Planck's constant and print the result in scientific notation 
    const double plancksConstant = 6.626e-34;
    printf("Planck's constant is: %e\n", plancksConstant);

    // Print the radius of the circle to 2 decimal places
    printf("Radius to 2 decimal places: %.2f\n", radius);
    // Print the floating-point circumference to 3 decimal places
    printf("Circumference to 3 decimal places: %.3f\n", circumference);
    // Print the integer value of the circumference 
    printf("Circumference as an integer: %d\n", intCircumference);
    // Print Planck's constant in scientific notation 
    printf("Planck's constant in scientific notation: %e\n", plancksConstant);

    return 0;
}