//simple c program 
/*

name:Ian Hudson 
reg:CT100/G/26142/25
Des: Are of a circle 
*/

#include <stdio.h>
#define PI 3.1416  // Define value of π

int main() {
    float radius, height, volume, surfaceArea;
    
    // prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    
    // Calculate volume and surface area 
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height; 
    
    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("surfaceArea of the cylinder = %.2f\n", surfaceArea);
    
    return 0;
}
    