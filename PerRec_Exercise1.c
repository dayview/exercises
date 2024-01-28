#include <stdio.h>

float calculateArea(float x, float y){
    return x * y;
}

float calculatePerimeter(float x, float y){
    return 2 * (x + y);
}

int main(){
	float length;
	float width;
	float area;
	float perimeter;
	
	printf("Enter length: ");
	scanf("%f", &length);
	printf("Enter width: ");
	scanf("%f", &width);
	
	area = calculateArea(length, width);
	printf("Area is: %.2f\n", area);
	
	perimeter = calculatePerimeter(length, width);
	printf("Perimeter is: %.2f\n", perimeter);
	
	return 0;
}