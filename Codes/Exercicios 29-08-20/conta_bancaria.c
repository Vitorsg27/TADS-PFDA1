/*BIBLIOTECAS*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*VARI�VEIS GLOBAIS*/
char  menu, d1, d2, d3, d4;

/*CORPO DO PROGRAMA*/
int main()
{
	inicio:
	setlocale(LC_ALL,"Portuguese");
	printf("Digite sua Senha: ");
	d1 = getch();
	printf("*");
	d2 = getch();
	printf("*");
	d3 = getch();
	printf("*");
	d4 = getch();
	printf("*");
	if (d1 == '1'&& d2 == '3'&& d3 =='1'&& d4 == '0')
	{
		menu:
		system("cls");
		printf(" Escolha uma op��o:\n\n");
		printf("=============");
		printf("\n a = saldo");
		printf("\n b = dep�sito");
		printf("\n c = pagamentos");
		printf("\n d = transfer�ncias");
		printf("\n e = sair");
		printf("\n=============\n\n");
		menu = getch();
		switch (menu)
		{
			case 'a': case 'A': printf("\nOpera��o : saldo\n\n"); break;
			case 'b': case 'B': printf("\nOpera��o : dep�sito\n\n"); break;
			case 'c': case 'C': printf("\nOpera��o : pagamentos\n\n"); break;
			case 'd': case 'D': printf("\nOpera��o : transfer�ncias\n\n"); break;
			case 'e': case 'E': printf("\nEncerrando opera��es");
				printf("."); sleep(1); printf("."); sleep(1); printf("."); return 0;
			default : printf("\nOp��o inv�lida!\n"); getch(); goto menu;
		}
	}
	else
	{
		printf("\nSenha incorreta\n");
		system("pause");
		system("cls");
		goto inicio;
	}
system("pause");
return 0;
}
