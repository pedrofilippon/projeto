#include <stdio.h>
void porcento(int a,int p){
	int resut;
	resut=a*p/100;
	printf("porcento=%d",resut);
}
	int main(){
            int op,a,p,bb;
			printf("dite op\n");
			scanf("%d",&op);
			printf("dite num\n");
			scanf("%d",&a);
			printf("dite porcento\n");
			scanf("%d",&p);
            switch(op){
                case 0:
                    porcento(a,p);
                break;
				case 1:
				//primo
				break;
				case 2:
				//imprime primo
				break;
				case 3:
				//media entre os numeros
				break;

            }


}
