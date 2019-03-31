#include <stdio.h>
#include <stdlib.h>

main(){
	
	int resultado;
	double valor;
	
    printf("Digite o valor do produto: ");
	scanf("%lf", &valor);
	
    fflush(stdin);
	
	printf("\nEscolha o serviço a utilizar: \n1)Total a pagar com desconto\n2)Valor para parcelamento em 3x\n3)Valor de comissão a vista\n4)Valor de comissão parcelada\n");
	switch (resultado){
		
		case 1:
			resultado = valor*0.9;
			printf("\nO valor do produto com desconto e: %d\n", resultado);
					
			break;
		
		case 2:
            resultado = valor/3;
			printf("\nO valor de cada parcela, sem juros e: %d\n", resultado);
			
			break;
		
		case 3:
		    resultado = (valor*0.9)*0.05;	
		    printf("\nA comissão a ser recebida sobre pagamento a vista e: %d\n", resultado);
		    
		    break;
		case 4:
			resultado = valor*0.05;
			printf("\nA comissão a ser recebida sobre pagamento parcelado e: %d\n", resultado);
			
			break;
		default:
			printf("\nOpção invalida!\n");
			break;
		
		
		
	}
	
	return 0;
}	
