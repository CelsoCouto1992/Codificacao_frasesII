#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//Definindo um nome de Oficial fixo para exemplificar
#define NOME_OFICIAL "Celso Pacheco"

void cabecalho(){
	printf("Agencia BRASILIA\n", 161);
	printf("Mensagem: CONFIDENCIAL - URG \n");
	printf("Oficial: %s\n\n\n", NOME_OFICIAL);
}

int main(){
	char frase[100], opcao;
	char nomeDigitado[100];
	
	do{
		printf("Digite o nome do Oficial: ");
		fgets(nomeDigitado, sizeof(nomeDigitado), stdin);
		nomeDigitado[strcspn(nomeDigitado, "\n")] = 0; //Remover a quebra de linha do final
		
		if(strcmp(nomeDigitado, NOME_OFICIAL) != 0){
			printf("\nNome de oficial incorreto. Acesso negado.\n");
			return 1; //Sair do programa se o nome do Oficial estiver incorreto
		}
		
		cabecalho();
		
		printf("Digite uma frase: ");
		fgets(frase, sizeof(frase), stdin);
		
		printf("\nDeseja executar novamente (S/N):");
		scanf("%c", &opcao);
		fflush(stdin);
		
		while(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N'){
			printf("\nErro! Deseja executar novamente (S/N): ");
			scanf("%c", &opcao);
			fflush(stdin);
		}
		
		System("cls");
	
	}while (opcao == 's' || opcao == 'S');
	
	
	return 0;
	
	
}
