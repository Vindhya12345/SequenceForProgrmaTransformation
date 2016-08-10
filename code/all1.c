#include <stdio.h>

int sumcalc(int a, int b, int N)
{
	int i;
	int x, y;
	x = 0;
	y = 0;
	for(i = 0; i <= N; i++) {
		x = x + (4*a/b)*i + (i+1)*(i+1);
		x = x + b*y;
	}
	return x;
}

int main(){
	int x = sumcalc(3, 4, 5);
	printf("%d", x);
}