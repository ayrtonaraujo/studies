/*
40. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:

• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante.

Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

#include <stdio.h>

float total_f(float prize_fx, float winner_fx);

int main()
{

	int prize = 780000;
	float winner_1 = 46, winner_2 = 32, winner_3 = 100 - winner_1 - winner_2; // percetages

	printf("Total prize: $ %d", prize);
	printf("\nWinner 1: $ %.2f", total_f(prize, winner_1));
	printf("\nWinner 2: $ %.2f", total_f(prize, winner_2));
	printf("\nWinner 3: $ %.2f", total_f(prize, winner_3));

	return 0;
}

float total_f(float prize_fx, float winner_fx)
{
	float total;
	total = prize_fx * (winner_fx / 100);
	return total;
}