/*O código escolhe um número entre 0 a 1023, e o 
usuário terá que adivinhar esse numero na sorte*/

#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void)
{
	//cria as variáveis
	int aleatorio;
	int user;
	srand(time(NULL));
//soteia os números
	aleatorio = rand()%1024;
	//pede o numero ao usuário
	do 
	{ 
		user = get_int("escolha um número até 1023:\n");
		//implementação de um codigo para revelar o número
		if(user == -69)
		{
			printf("número é %i\n", aleatorio);
		}
		/*apenas verifica para poder exibir
		 a mensagem se errou*/
		if(user != aleatorio)
		{
			printf("Você errou, ");
		}
	}
	//faz a validação e exibe a mensagem dizendo que você acertou.
	while(aleatorio != user);
	{
		printf("Você acertou, o número %i era o número certo \n", user);
	}
}
