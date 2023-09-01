#include <stdio.h>

int main(){
	float fahr = -270;
	float cels;
	float kelv;
	int upper = 300;

	while (fahr<=upper){
		cels = 5.0 * (fahr -32.0)/9.0;
		kelv = cels+273.0;
		printf("%6.1f %6.1f %9.0f\n", kelv, cels, fahr);
		fahr+=20;	
	}
	return 0;
}
