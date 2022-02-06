#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int opt, test = 1;
	
	while(test)
	{
		//system("CLS");
		printf("*********************************************************************************************\n");
		printf("|                           M E N U    D E    C L I E N T E S                               |\n");
		printf("| ----------------------------------------------------------------------------------------- |\n");
		printf("|                                                                                           |\n");
		printf("|  1  -  Incluir Cliente                                                                    |\n");
		printf("|  2  -  Exibir Cliente                                                                     |\n");
		printf("|  3  -  Alterar Cadastro de Cliente                                                        |\n");
		printf("|  4  -  Relatorio de Clientes                                                              |\n");
		printf("|  5  -  Excluir Cliente                                                                    |\n");
		printf("|  6  -  Sair                                                                               |\n");
		printf("|                                                                                           |\n");
		printf("*********************************************************************************************\n");
		printf("|  Entre com a opao desejada: ");
		scanf("%d", &opt);
						
		switch(opt)
		{
			case 1:
					printf("\n\nINCLUIR\n");
					getchar();
					break;
				
			case 2:
				
					printf("\n\nEXIBIR\n");
					getchar();
					break;					
			case 3:
				
					printf("\n\nALTERAR\n");
					getchar();
					break;
			case 4:
				
					printf("\n\nRELATORIO\n");
					getchar();
					break;
			case 5:
				
					printf("\n\nEXCLUIR\n");
					getchar();
					break;
			case 6:
				
					printf("\n\nSAIR\n");
					test = 0;
					break;
			default:
					printf("\n\nOPCAO INCORRETA - TENTAR NOVAMENTE\n");
				
		}
		
		
	}





	system("PAUSE");
	return 0;
}
