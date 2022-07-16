
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <cmath>

int main()
{
	float a,b,c,d,t,e,f,g,m;
	char w;
	
	printf("Introduzca sólo los números que acompañan a sus x\nx^2: ");
	scanf("%f",&a);
	printf("\nx: ");
	scanf("%f",&b);
	printf("\nConstante: ");
	scanf("%f",&c);
	
	printf("\nComo quieres tus raices?\n \n-f=fraccciones\n-d=decimales\n");
	scanf("%s",&w);
	printf("\n");
	
	switch(w){
		case 'd':
	
			if(a==0){
				printf("No mames, cabrón\nTu pendejada es una ecuci\242n normal\nUsa una puta calculadora >:vv");
			}else{
				t=b*b;
				m=4*a*c;
		
				d=t-m;
	
				if (d>=0){
					e=sqrt(d);	
		
					f=(-b+e);
					f=f/(2*a);
					g=(-b-e);
					g=g/(2*a);
			
					printf("\nTu primer ra\241z es  %.2f",f);
					printf("\nTu segunda ra\241z es %.2f",g);	
			
					if(f<0){
						if(g<=0){	
							f=-f;
							g=-g;
							printf("\n\nY la factorizaci\242n (con las x^1) es (x+%.2f)(x+%.2f)",f,g);
						}else{
							f=-f;
							printf("\n\nY la factorizaci\242n (con las x^1) es (x+%.2f)(x-%.2f)",f,g);
						}
					}else{
						if(g<=0){
							g=-g;
							printf("\n\nY la factorizaci\242n (con las x^1) es (x-%.2f)(x+%.2f)",f,g);
						}else{
							printf("\n\nY la factorizaci\242n (con las x^1) es (x-%.2f)(x-%.2f)",f,g);
						}
					}
				printf("\n");
		
				}else{
					printf("Son raices complejas :O\n");
					d=d*-1;
					e=sqrt(d);	
		
					f=(2*a);
					f=(-b/f);
					g=(2*a);
					g=(e/g);
					
					if(f==0){
						printf("\nTu primer ra\241z compleja es  ( %.2f)i",g);
						printf("\nTu segunda ra\241z compleja es (-%.2f)i\n",g);
					}else{
						printf("\nTu primer ra\241z compleja es  %.2f + (%.2f)i",f,g);
						printf("\nTu segunda ra\241z compleja es %.2f - (%.2f)i\n",f,g);
					}
				}

			}
			break;
	
		case 'f':
			if(a==0){
				printf("No mames, cabrón\nTu pendejada es sacar una ecuaci\242n normal\nUsa una puta calculadora >:vv");
			}else{
				t=b*b;
				m=4*a*c;
		
				d=t-m;
	
			if (d>=0){	
			
				printf("\nTu primer ra\241z es  (%.2f+v%.2f)/%.2f",-b,d,2*a);
				printf("\nTu segunda ra\241z es (%.2f-v%.2f)/%.2f",-b,d,2*a);	
			
					if(b<0){
						printf("\n\nY la factorizaci\242n (con las x^1) es (x+(%.2f+v%.2f)/%.2f))(x+(%.2f+v%.2f)/%.2f))",b,d,2*a,b,d,2*a);
					}else{
						printf("\n\nY la factorizaci\242n (con las x^1) es (x-(%.2f+v%.2f)/%.2f))(x-(%.2f+v%.2f)/%.2f))",b,d,2*a,b,d,2*a);
						}
				printf("\n");
		
			}else{
				printf("Son raices complejas :O\n");
					
				d=d*-1;
		
				f=(-b/2*a);
				g=(e/2*a);
			
				if(b==0){
					printf("\nTu primer ra\241z compleja es   (v%.2f/%.2f)i",d,2*a);
					printf("\nTu segunda ra\241z compleja es -(v%.2f/%.2f)i\n",d,2*a);
				}else{
					printf("\nTu primer ra\241z compleja es  (%.2f/%.2f)+(v%.2f/%.2f)i",-b,2*a,d,2*a);
					printf("\nTu segunda ra\241z compleja es (%.2f/%.2f)-(v%.2f/%.2f)i\n",-b,2*a,d,2*a);
				}
			}
				
			}
			break;
		default:
			printf("No sé que hayas querido hacer, pero creo que necesitas volver a la primaria (consejo de bros ;))");
			break;
	}
	
	return 0;
}
