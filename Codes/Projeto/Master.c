/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
/* Variáveis */
char op;

/* CORPO DO PROGRAMA */
int main()
{
	setlocale (LC_ALL, "");
	/*marcador para retornar*/
	inicio:
		
	system ("color 07");	/* cor de fundo preta e texto branco*/
	system ("cls");
		
	/* constrói o menu */
	printf ("=================\n");
	printf ("    MENU     \n");
	printf ("    1. pedido    \n");
	printf ("    2. pague    \n");
	printf ("    3. leve     \n");
	printf ("    S. SAIR     \n");
	printf (" Sua escolha: ");
	/* Limpar buffer teclado, sta in é o teclado */
	fflush (stdin);
	
	/* Get pegar, ch caracter, sem mostrar na tela; getche mostra (estão no conio) */
	op = getche ();
	
	/* Chama o respectivo programa-filho */
	
		if ( op == '1' )
			system ("Pedido");
		else 
		if ( op == '2' )
			system ("Pague");
		else
		if ( op == '3' )
			system ("Leve");
		else
		if ( op == 's')
			exit(0);	
		else 
		{
		printf ("\n\nESCOLHA UMA DAS OPÇÕES DISPONIVEIS!");
		sleep (3);
		system ("cls");
	}
	
	system ("color 07");	/* cor de fundo preta e texto branco */
	system ("cls");
	printf ("\n\nVoltando");
	sleep (3);
	
	goto inicio;
	return 0;
}

