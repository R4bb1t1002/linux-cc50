/*O código escolhe um número e o usuário terá que adivinhar qual é*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(NULL));

	//Sorteio do numero base
	int aleatorio = rand()%1024;

	//Pedido de nuúmero ao usuário
	int user = get_int("Tente adivinhar um numero de 0 a 1024:");

	//Verificação do numéro e o que fazer se acertar ou errar
	if(user != aleatorio)
	{
		printf("Você errou, o numero era %i\n", aleatorio);
	}
	else 
	{
		printf("Párabens, você é uma pessoa de sorte, o número %i era sim o número certo\n", aleatorio);
	}
}

