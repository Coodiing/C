/*
** debug.c for debug in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:52:16 2013 gregoire1 billet
** Last update Sat Mar 23 21:41:18 2013 gregoire1 billet
*/

#include "head.h"

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
  my_put_nbr(my_getnbr("42"));
}
