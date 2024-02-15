#include <stdio.h>

float inchesToFeet(float inches){
    return inches / 12;
}

float inchesToYards(float inches){
    return inches / 36;
}

float inchesToMillimeters(float inches){
    return inches * 25.4;
}

float inchesToCentimeters(float inches){
    return inches * 2.54;
}

float inchesToMeters(float inches){
    return inches * 0.0254;
}


int main(){
    float inches;
    printf("Enter a measurement in inches: ");
    scanf("%f", &inches);

    printf("Feet: %.2f\n", inchesToFeet(inches));
    printf("Yards: %.2f\n", inchesToYards(inches));
    printf("Millimeters: %.2f\n", inchesToMillimeters(inches));
    printf("Centimeters: %.2f\n", inchesToCentimeters(inches));
    printf("Meters: %.2f\n", inchesToMeters(inches));

    return 0;

}