#include <stdio.h>

// This program converts temperatures from Celsius to Fahrenheit
// and prints the results in a table format.

int main(void) {
    float fahr, celsius;
    const float lower = 0.0;  // Lower limit of the temperature table
    const float upper = 300.0; // Upper limit of the temperature table
    const float step = 20.0;   // Step size between table entries
    
    // Print the table header
    printf("Celsius - Fahrenheit\n");

    // Loop to calculate and print the Fahrenheit equivalents
    // for each Celsius temperature from 'lower' to 'upper'
    for (celsius = lower; celsius <= upper; celsius += step) {
        fahr = (9.0 / 5.0) * celsius + 32; // Convert Celsius to Fahrenheit
        printf("%6.2f - %6.2f\n", celsius, fahr);  // Print the temperatures
    }

    return 0;  // Indicate that the program ended successfully
}
