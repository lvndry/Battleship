#include "battleship.h"


int main(){
	Player p1, p2;
	int pause; //pour les scanf de fin/debut de tour

	printf("PLAYER 1 : press enter");
	getchar();
	init(&p1);
	printf("This is your map :\n");
	display(&p1);
	printf("press enter to end");
	getchar();

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPLAYER 2 : press enter");
	getchar();
	init(&p2);
	printf("This is your map :\n");
	display(&p2);
	printf("press enter to end");
	getchar();

	Player* current_player = &p2;

	do{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\npress enter to begin turn");
		scanf("%d", pause);
		current_player = ((current_player==&p1)?&p2:&p1);	//le tour revient à l'autre joueur
		display(&current_player);	//on affiche sa map et ce qu'il sait de la map adverse
		attack(((current_player==&p1)?&p2:&p1));	//il attaque l'adversaire
		display(&current_player);	//on réaffiche les map

		printf("press enter to end turn");
		scanf("%d", pause);
	}while(isAlive(current_player));
}
