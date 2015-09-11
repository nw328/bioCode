#include <stdio.h>

float length;
float width;
float area;
float perem;

int main(){
	length = 2;
	width = 3;
	area = length * width;
	perem = (2*length) + (2*width);
	
	printf("\n\tthe area and paremeter of a rect with width\n");
	printf("\n\t%f and length %f is %f and %f, respectively \n", width, length, area, perem);
return(0);
}

	

