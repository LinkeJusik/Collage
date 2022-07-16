#include<math.h>
#include<stdio.h>
#include<stdlib.h>

double Newton_Rapson(int n){
	double x;
	if(n==0){
		return 3.5;
	}else{
		x=Newton_Rapson(n-1);
		x=x-((pow(x,x)-100)/(pow(x,x)*(1+log(x))));
		return x;
	}
}

int main(){
	int n=100;
	double m=Newton_Rapson(n);
	
	printf("El número calculado en %d interaciones es %.16f\n",n,m);
	printf("Y ese número elevado a si mismo es %f\n\n",pow(m,m));	
	
	system("pause");
	return 0;
}
