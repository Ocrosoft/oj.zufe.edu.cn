#include <stdio.h>
#include <math.h>
int main( )
{
	int V, D;	 
        double d, d3;
	double pi = 2*asin(1);
	scanf( "%d%d", &D, &V );
	d3 = D*D*D-6*V/pi;
	d = pow( d3, 1.0/3 );
	printf( "%.3f\n", d );
	return 0;
}
