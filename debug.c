/*
** debug.c for debug in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:52:16 2013 gregoire1 billet
** Last update Mon Mar 25 18:14:44 2013 gregoire1 billet
*/

#include	"head.h"
#include	"/home/billet_a/lib/header.h"

/*
** Mise en page et affichage des données de la structure game
*/
void		debug(t_game *game)
{
  aff("\n\n");
  aff(center("Fourmiland", '-', "", 80));
  aff(center("How many time will they take to find the exit?", ' ', "", 80));
  aff(center("Debug", '-', "", 40));
  aff(center("L'existence du fichier entré en paramètre n'est pas vérifié",
	     ' ', "", 80));
  aff(center("la fonction create_ant crée un carré à la place d'une fourmi",
	     ' ', "", 80));
  aff(center("-=o=", '-', "", 80));
  aff("\n\n");
}
