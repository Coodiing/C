/*
** init.c for init in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:52:43 2013 gregoire1 billet
** Last update Mon Mar 25 18:05:35 2013 gregoire1 billet
*/

#include <stdlib.h>
#include "head.h"
#include "/home/billet_a/lib/header.h"

/*
** Crée la structure game et intègre les données principales
*/
t_game		*init(char *file)
{
  t_game	*game;

  game = xmalloc(sizeof(t_game));
  game->turn = 0;
  game->file = my_read(file);
  return (game);
}
