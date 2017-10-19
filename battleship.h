#include <stdio.h>

typedef struct 
{
	int map[10][10]; //la carte du joueur avec ses bateaux : 0:rien;  1:bateau
	int ennemy_map[10][10]; //la carte qui se remplira au fur et à mesure des actions du joueur
}Player;

void init(Player*); //LANDRY : permet au joueur de placer ses bateaux
void attack(Player*); //VINCENT: Demande les coordonées ou tu veux attaquer et dit si tu as touche ou pas un bateau
void display(Player*); //LEO : Affiche la map du joueur, puis la vision de la map ennemie
int isAlive(Player*); //CEDRIC : Verifie que le joueur n'a pas perdu