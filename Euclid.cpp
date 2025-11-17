#include "Euclid.h"

int gcd(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x % y);
	}
}

int gcd_array(const int a[], int n)
{
	if (n == 1)
	{
		return a[ 0 ];
	}
	else if (n == 2)
	{
		return ( gcd(a[ 0 ], a[ 1 ]) );
	}
	else
	{
		return( gcd(a[ 0 ], gcd_array(&a[ 1 ], a[ n - 1 ])) );
	}
}
