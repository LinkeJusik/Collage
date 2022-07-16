#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <cmath>

int main(){
	int n=1000,i;
	char c;
	
	for(i=0;i<n;i++){
		c=i;
		printf("El codigo ASCII de %c es %d\n",c,i);
	}
	
	return 0;
}
