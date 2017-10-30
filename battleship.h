#include <stdio.h>

#define BOARD_SIZE 10
#define PORTE_AVION 5
#define CROISEUR 4
#define CONTRE_TORPILLEUR 3
#define SOUS_MARIN 3
#define TORPILLEUR 1

typedef struct 
{
	int map[BOARD_SIZE][BOARD_SIZE]; //la carte du joueur avec ses bateaux : 0:rien;  1:bateau
	int ennemy_map[BOARD_SIZE][BOARD_SIZE]; //la carte qui se remplira au fur et à mesure des actions du joueur. Les cases ou vous avez jouer valent 1
}Player;

void init(Player*); //LANDRY : permet au joueur de placer ses bateaux
int is_free(Player* player, int x, int y, int lenght, char d); //LANDRY
void attack(Player*); //VINCENT: Demande les coordonées ou tu veux attaquer et dit si tu as touche ou pas un bateau
void display(Player*); //LEO : Affiche la map du joueur, puis la vision de la map ennemie
int isAlive(Player*); //CEDRIC : Verifie que le joueur n'a pas perdu