#include <stdio.h>

int main(void){

	float length, width, area, perimeter;

	printf("Enter length: ");
	scanf("%f", &length);
	printf("Enter width: ");
	scanf("%f", &width);

	area = length * width;
	perimeter = (length+width)*2;

	printf("Area is : %.2f\n",area);
	printf("Perimeter is :%.2f\n",perimeter);

}
