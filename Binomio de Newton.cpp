#include <stdio.h>
#include <math.h>

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*(factorial(n-1));
	}
}

int combinacion(int n, int k){
	return (factorial(n)/(factorial(k) * factorial(n-k)));
}

int main(){
	int n,i;
	
	printf("Ingrese el grado al que desea elevar el binomio (x+y)\n");
	scanf("%d",&n);
	
	for(i=0;i<n+1;i++){
		if(i==0){
			printf("(%d * x^(%d) * y^(%d)) ",combinacion(n,i),i,n-i);
		}else{
			printf("+ (%d * x^(%d) * y^(%d)) ",combinacion(n,i),i,n-i);
		}
	}
	
	return 0;
}
	
