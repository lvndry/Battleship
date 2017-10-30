#include "battleship.h"

void init(Player* player){
	int x,y;
	char d;

	do{
		printf("En quel postition voulez-vous placer votre porte-avion ?\n");
		printf("Positon en x: ");
		scanf("%d", &x);
		getchar();
		printf("Positon en y : ");
		scanf("%d", &y);
		getchar();
		printf("Dans quel directon voulez-vous le placer ?\nTapez v pour vertical ou h pour horizontal : ");
		scanf("%c", &d);
		getchar();
	}while(is_free(player, x, y, CROISEUR, d) == 0);
	
	if(d == 'v'){
		for(int i = y; i < PORTE_AVION; i++)
			player->map[x][i] = 1; 
	}
	else for(int i = x; i < PORTE_AVION; i++)
			player->map[i][y] = 1;
	do{
		printf("En quel postition voulez-vous placer votre croiseur ?\n");
		printf("Positon en x: ");
		scanf("%d", &x);
		getchar();
		printf("Positon en y : ");
		scanf("%d", &y);
		getchar();
		printf("Dans quel directon voulez-vous le placer ?\nTapez v pour vertical ou h pour horizontal : ");
		scanf("%c", &d);
		getchar();
	}while(is_free(player, x, y, CROISEUR, d) == 0);

	if(d == 'v'){
		for(int i = y; i < CROISEUR; i++)
			player->map[x][i] = 1; 
	}
	else for(int i = x; i < CROISEUR; i++)
			player->map[i][y] = 1;

	do{
		printf("En quel postition voulez-vous placer votre contre torpilleur ?\n");
		printf("Positon en x: ");
		scanf("%d", &x);
		getchar();
		printf("Positon en y : ");
		scanf("%d", &y);
		getchar();
		printf("Dans quel directon voulez-vous le placer ?\nTapez v pour vertical ou h pour horizontal : ");
		scanf("%c", &d);
		getchar();
	}while(is_free(player, x, y, CONTRE_TORPILLEUR, d) == 0);

	if(d == 'v'){
		for(int i = y; i < CONTRE_TORPILLEUR; i++)
			player->map[x][i] = 1; 
	}
	else for(int i = x; i < CONTRE_TORPILLEUR; i++)
			player->map[i][y] = 1;

	do{
		printf("En quel postition voulez-vous placer votre sous-marin ?\n");
		printf("Positon en x: ");
		scanf("%d", &x);
		getchar();
		printf("Positon en y : ");
		scanf("%d", &y);
		getchar();
		printf("Dans quel directon voulez-vous le placer ?\nTapez v pour vertical ou h pour horizontal : ");
		scanf("%c", &d);
		getchar();
	}while(is_free(player, x, y, SOUS_MARIN, d) == 0);

	if(d == 'v'){
		for(int i = y; i < SOUS_MARIN; i++)
			player->map[x][i] = 1; 
	}
	else for(int i = x; i < SOUS_MARIN; i++)
			player->map[i][y] = 1;

	do{
		printf("En quel postition voulez-vous placer votre torpilleur ?\n");
		printf("Positon en x: ");
		scanf("%d", &x);
		getchar();
		printf("Positon en y : ");
		scanf("%d", &y);
		getchar();
		printf("Dans quel directon voulez-vous le placer ?\nTapez v pour vertical ou h pour horizontal : ");
		scanf("%c", &d);
		getchar();
	}while(is_free(player, x, y, TORPILLEUR, d) == 0);

	if(d == 'v'){
		for(int i = y; i < TORPILLEUR; i++)
			player->map[x][i] = 1; 
	}
	else for(int i = x; i < TORPILLEUR; i++)
			player->map[i][y] = 1;
	for(int i = 0; i < BOARD_SIZE; i++){
		for(int j = 0; j < BOARD_SIZE; j++){
			player->ennemy_map[i][j] = 0;
		}
	}
}

int is_free(Player* player, int x, int y, int lenght, char d){
	
	if(d == 'v'){
		for(int i = y; i < lenght; i++){
			if(player->map[x][i] == 1){
				printf("Positon non disponible choisissez en un autre!\n\n\n");
				return 0;
			}
		}
			if(y + lenght > BOARD_SIZE){
				printf("Positon non disponible choisissez en un autre!\n\n\n");
				return 0;
			}
	}
	else {
		for(int i = x; i < lenght; i++){
			if(player->map[i][y] == 1){
				printf("Positon non disponible choisissez en un autre!\n\n\n");
				return 0;
			}
		}
		if(x + lenght > BOARD_SIZE){
			printf("Positon non disponible choisissez en un autre!\n\n\n");
			return 0;
		}
	}
	return 1;
}



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