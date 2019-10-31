#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

float gaussian(float);

int main(){
	int N = 10000;
	int delta = 1;
	int sigma = 1;
	srand48(8);
	
	float propuesta;
	float anterior = drand48();
	for (int i=1;i<N;i++) {  
		float r;
		propuesta = anterior + (drand48()-0.5)*delta;
		float cociente = gaussian(propuesta)/gaussian(anterior);
		if (cociente < 1){
			r = cociente;
		} else {
			r = 1;
		}
		
		float alpha = drand48();
		if (alpha < r) {
			std::cout << propuesta << std::endl;
			anterior = propuesta;
		}
		else {
			std::cout << anterior << std::endl;
		}
    }
    
   return 0;
 }

float gaussian(float x){
	float sigma = 1;
	
	return exp(-x*x/(2.0)*sigma*sigma)/sqrt(2*M_PI*sigma*sigma);
	
}
