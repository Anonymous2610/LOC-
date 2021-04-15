#include <stdio.h>

int main(void) {
	// your code goes here
	float cel,far;
    printf("Temperature in Celcius : \n");
    scanf("%f",&cel);
    
    far = (1.8*cel) + 32;
    printf("Temperature in farenheight : %f", far);
	return 0;
}

