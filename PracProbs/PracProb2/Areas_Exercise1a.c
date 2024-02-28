#include <stdio.h>

float area(float l, float w){
    return l * w;
}

int main(){
    float length, width, height;

    printf("Enter length, width, and height: ");
    scanf("%f %f %f", &length, &width, &height);

    float firstSideArea = area(length, width);
    float secondSideArea = area(length, height);
    float thirdSideArea = area(width, height);
    float volume = length * width * height;

    printf("Area of the First Side: %.2f, Area of the Second Side: %.2f, Area of the Third Side: %.2f, Volume of the Box: %.2f", firstSideArea, secondSideArea, thirdSideArea, volume);

    return 0;
}