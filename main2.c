/*

    Assignment: Exercise 3
    Student Name: Shayne McNeil
    Date: January 23, 2025
    Student ID: W0454809

*/

#include <stdio.h>

int main() {

    // Declare two float variables and assign them real numbers
    float pi = 3.14159f;
    float phi = 1.6180f; 

    // Calculate the sum of these numbers
    float sum = pi + phi;
    printf("Sum of %f and %f is %.2f\n", pi, phi, sum);

    // Calculate the difference of these numbers
    float difference = pi - phi;
    printf("Difference of %f and %f is %.2f\n", pi, phi, difference);

    // Calculate the product of these numbers
    float product = pi * phi;
    printf("Product of %f and %f is %.2f\n", pi, phi, product);

    // Calculate the quotient of these numbers
    float quotient = pi / phi;
    printf("Quotient of %f and %f is %.2f\n", pi, phi, quotient);

    // Use modulus operator to find remainder involving two integers
    int x = 123; // Create first integer
    int y = 9; // Create second integer

    int xModuloY = x % y; // Store the modulo of X mod Y
    printf("%d modulo %d is %d\n", x, y, xModuloY); // Print result

    // Store a character and print the character and its ASCII value
    char myChar = '@'; // Store the @ symbol as a char 
    printf("My character is %c, and its ASCII value is %d\n", myChar, myChar);

    // Prompt the user to enter and integer and a float, and print the values of each
    int userInt;
    float userFloat;

    printf("Enter an integer: \n"); // Prompt user to input an integer
    scanf("%d", &userInt); // Store the input to the userInt variable
    printf("Enter a float: \n"); // Prompt user to input a float
    fflush(stdout);
    scanf("%f", &userFloat); // Store the input to the userFloat variable
    printf("The integer you entered was %d, and the float you entered was %f \n", userInt, userFloat);
    fflush(stdout);

    // Demonstrate the use of pre- and post-increment and decrement operators
    int myVar = 22;
    printf("The starting value is %d\n", myVar);
    --myVar; // Pre-decrement 
    printf("The result of the pre-decrement operation is %d\n", myVar);
    myVar--; // Post-decrement
    printf("The result of the post-decrement operation is %d\n", myVar);
    ++myVar; // Pre-increment
    printf("The result of the pre-increment is %d\n", myVar);
    myVar++; // Post-increment
    printf("The result of the post-increment is %d\n", myVar);

    return 0;
}