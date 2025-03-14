#include <stdio.h>

#define a -0.50  //Quanto Romeu ama amar
#define b +1.00 //Quanto Romeu ama ser amado
#define c -1.00  //Quanto Julieta ama ser amada
#define d -0.50 //Quanto Julieta ama amar

double R(double r, double j){
	return a * r + b * j;
}

double J(double r, double j){
	return c * r + d * j;
}
int main(){
	
	double r = +5.00, j = +1.00;

	double t = 0.0, h = 0.01, tf = 50.0, k1, k2, k3, k4, l1, l2, l3, l4;
	FILE* file = fopen("dat/ld.dat", "w");

	fprintf(file, "%e %e %e\n", t, r, j);

	while(t < tf){
		k1 = R(r, j);
		l1 = J(r, j);

		k2 = R(r+h*0.5*k1, j+h*0.5*l1);
		l2 = J(r+h*0.5*k1, j+h*0.5*l1);

		k3 = R(r+h*0.5*k2, j+h*0.5*l2);
		l3 = J(r+h*0.5*k2, j+h*0.5*l2);

		k4 = R(r+h*k3, j+h*l3);
		l4 = J(r+h*k3, j+h*l3);

		r += h * (1.0/6.0) * (k1 + 2.0*k2 + 2.0*k3 + k4);
		j += h * (1.0/6.0) * (l1 + 2.0*l2 + 2.0*l3 + l4);

		t += h;

		fprintf(file, "%e %e %e\n", t, r, j);
		
	}

	fclose(file);

	return 0;
}
