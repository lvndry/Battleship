#include "battleship.h"

void display(Player* player)
{
	int i,j; 

	for(i=0 ; i < BOARD_SIZE] ; i++)
	{

		for(j=0 ; j<BOARD_SIZE ; i++)
		{
			printf("%d\t",player->map[i][j]);
		}
		printf("\n");



	}

	printf("\n\n");


	printf("map ennemi : \n\n");

	for(i=0 ; i < BOARD_SIZE] ; i++)
	{

		for(j=0 ; j<BOARD_SIZE ; i++)
		{
			printf("%d\t",player->ennemy_map[i][j]);
		}
		printf("\n");



	}	




}