/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* variaveis de memoria */
float inicial;
float novo;

/* corpo do programa */
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("\nCalculo de Reajuste sobre Sal�rio\n");
	printf("\nInforme o Sal�rio Pr�-Reajuste\n");
	fflush (stdin);
	scanf ("%f", &inicial);
	novo = inicial + inicial * 0.25;
	printf ("\n\nSal�rio P�s-Reajuste �: R$%.f", novo);
	getch();
	return (0);
}
