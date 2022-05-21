#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    // store values
    double width = atof(argv[1]);
    double height = atof(argv[2]);
    double perimeter = 0.0, area= 0.0;
    
    // calculation 
    perimeter = 2.0 * (height + width);
    area = width * height;
    
    // print values
    printf("Perimeter of the triangle: %.2f \n", perimeter);
    printf("Area of the triangle: %.2f \n", area);
    return 0;
}