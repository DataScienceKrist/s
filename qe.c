#include <stdio.h>
#include <math.h>

double discrim(double a, double b, double c)
{
    return b*b - 4*a*c;
}
int main()
{
    double p, q, r, d;
    int n;
    n = scanf("%lf %lf %lf", &p, &q, &r);
    if(n != 3) {
	printf("Error: Wrong input.\n");
	return 1;
    }
    if(p == 0) {
	printf("Error: Not a quadratic equation!\n");
	return 2;
    }
    d = discrim(p, q, r);
    if(d < 0) {
	printf("No roots\n");
	return 0;
    }
    }

