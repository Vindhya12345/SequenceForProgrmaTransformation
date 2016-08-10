#include <stdio.h>
int main(){
	int i=0;
int t0=3456;
	int t4=0;
	int a=4*t0;
	int b=1;
	i=0;
	int t1=3456;
	int c=t1+1;
	int A[]={1,2,3,4,5,6,7};
	int B[]={11,22,33,44,55,66,77};
	int x,y,z,t2,t3,t5=9;
	if(a>c){
L1:		t1=4*a;
		t2=t1+1;
	}
	else{
L0:		t1=4*a;
		t2=t1+1;
	}
	if(t2>t0){
		x = A[t2];
		y = A[t2];
		z = B[b];
		t3 = z * c;
		t4 = x * b;
		A[t2] = t3 + t4;
		t5 = z * c;
		A[t2] = t5;
		i = i + 1;
		t1 = t2;
	if (t2 < a) goto L0;
	goto L1;
	
	}
	else{
		a=0;
		b=0;
		c=0;
	}	
}
