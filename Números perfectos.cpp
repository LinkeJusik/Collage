#include<stdio.h>

int NumPer(int d){
	int b,cont,c=2,a=0;
	while(a<d){
		b=1;
		cont=0;
		while(b<c){
			if(c%b==0){
				cont+=b;
			}
			b++;
		}
		if(cont==c){
			printf("%d es un número perfecto\n",c);
			a++;
		}
		c++;
	}
}

int main(){
	int a = 4;
	NumPer(a);
}
