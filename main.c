#include <stdio.h>
#include <stdlib.h>

void porcento(int a,int p){
	int resut;
	resut=a*p/100;
	printf("porcento=%d",resut);
}

int primo( int num){
	int i;
	for(i= 2; i < num-1; i++){
		 if(num%i==0) return 0;
	}
	return 1;
}
	int main(){
		int op,a,p,bb;
        int num;
		printf("dite op\n");
		scanf("%d",&op);

		switch(op){
			case 0:
			printf("dite num\n");
			scanf("%d",&a);
			printf("dite porcento\n");
			scanf("%d",&p);
			porcento(a,p);
			break;
			
			case 1:
			//primo
			printf("Digite num\n");
			scanf("%d",&num);
			if(primo(num)) printf("Primo!");
			else  printf("Nao Primo!");
			break;
			
			case 2:
			//imprime primo
			break;
			case 3:
			//media entre os numeros
			break;

		}
}
