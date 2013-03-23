/*
** main.c for main in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:50:57 2013 gregoire1 billet
** Last update Sun Mar 24 00:09:51 2013 gregoire1 billet
*/

#include	"head.h"

int		main(int ac, char **av)
{
  t_game	*game;

  if (!error(ac, av))
    {
      game = init(av[1]);
      parse(game, av[1]);
      debug(game);
    }
}
