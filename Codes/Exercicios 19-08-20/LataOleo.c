/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
/* variaveis de memoria */
float altura;
float raio;
float volume;

/* corpo do programa */
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("\nCalculo de volume\n");
	printf("\nInforme a altura do objeto em cent�metros\n");
	fflush (stdin);
	scanf ("%f", &altura);
	printf ("\nInforme o raio do objeto em cent�metros\n");
	fflush (stdin);
	scanf ("%f", &raio);
	volume = 3.14159 * (raio * raio) * altura;
	printf ("\n\nVolume da lata �: %.2f cm�", volume);
	getch();
	return (0);
}
