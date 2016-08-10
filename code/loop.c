#include <stdio.h>

int foobar(int N)
{
	int i, j, x=0, t0, t1=0, t2 = 80;
	t1 = 1024;
	for(i = 0; i <= N-1; i++) {
		t0 =( (i*i)<<3) + (i*32);
		x = x + (N-i)*t0 + t1*(N*(N+1)-i*(i+1));
		t1 = t1 + 2 + t2;
	}
	return x;
}

int main(){
	int a = foobar(8000);
	printf("%d\n",a);
	return 0;
}
