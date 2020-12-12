#include <stdio.h>
#include <math.h>

int main() {

	float x, eps, S=0, numerator=0, denumerator=1;
	int n=1;


	printf("Task: calculate 2( x + x^3/3 + x^5/5...) \n");

	printf("Add float number (x) from -1.0 to 1.0: \n");
	scanf("%f", &x);


	if(fabs(x)>=1.0){
		printf("Error var X is not valid \n");
		return 0;
	}

	printf("Add float number (eps): \n");
	scanf("%f", &eps);
	
	numerator = x;
	S += numerator/denumerator;
	
	while (fabs(numerator/denumerator) > eps){
		numerator = numerator*(x*x);
		denumerator = denumerator+2;
	    S += numerator/denumerator;
	    n++;
	}

	S= S*2;

	printf("eps= %f\n", eps);
	printf("iteration= %d\n", n);
	printf("S= %.5f\n", S);

	printf("\n\n");

	//revise result
	printf("revise result \n");
	float sLn = logf((1+x)/(1-x));
	printf("S=ln((1+x)/(1-x)) = %.5f\n", sLn);

	return 0;
}
