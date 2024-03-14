/*This code will tell, how many coins you need to return the change */


#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	float troco;
	int Moeda = 0;
/*take the value and separete the cents(the rounding function
server to correct the machine's inaccuracy, in addition 
to multiplying by 100 to make easy to handle the number*/
	float money = get_float("de um valor (por favor utilize . para expressar os centavos:");
	troco = money - (int)money;
	troco = troco * 100;
	troco = round(troco);
/*Sets the values= of coins*/
	int moedas[4] ={25, 10, 5, 1};

	for(int i = 0; i <= 3; i++)
	{
/*Check if the change it's 0, cause if right, has no
sense continue, and tell you how many coins you need*/
		if(troco == 0);
		{
			printf("a contagem de moedas é de %i\n",Moeda);
			return 0;
		}
/*Make the operations with the change, and it adds the number of coins*/
		while(troco >= moedas[i])
		{
			troco = troco - moedas[i];

			Moeda++;
		}
	}
	printf("A contagem de moedas é de %i\n",Moeda);
}
