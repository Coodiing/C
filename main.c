/*
** main.c for main in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:50:57 2013 gregoire1 billet
** Last update Mon Mar 25 18:18:08 2013 gregoire1 billet
*/

#include	"head.h"

int		main(int ac, char **av)
{
  t_game	*game;
  t_list	*rooms;

  if (!error(ac, av))
    {
      game = init(av[1]);
      rooms = parse(av[1]);
      nw_map(rooms);
      debug(game);
    }
  return (0);
}
