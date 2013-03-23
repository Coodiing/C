/*
** debug.c for debug in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:52:16 2013 gregoire1 billet
** Last update Sun Mar 24 00:16:39 2013 gregoire1 billet
*/

#include "head.h"

/*
** Mise en page et affichage des données de la structure game
*/
int		debug(t_game *game)
{
  aff(center("Fourmiland", '-', "", 80));
  aff(center("How much time will they take to find the exit?", ' ', "|", 80));
  aff(center("-=o=", '-', "", 80));
  aff(game->map);
  aff(center("Debug", '-', "", 40));
  aff(center("Au début il y a x fourmis", ' ', "|", 40));
  aff(center("Nous sommes au tour x", ' ', "|", 40));
  aff(center("", '-', "", 40));
  my_put_nbr(game->inx);
}
