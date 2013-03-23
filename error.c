/*
** error.c for error in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:51:41 2013 gregoire1 billet
** Last update Tue Mar 19 16:32:17 2013 gregoire1 billet
*/

#include "head.h"

int		file_exists(char *str)
{
  return (1);
}

/*
** Check la présence d'erreur avant de lancer les instructions
*/
int		error(int ac, char **av)
{
  if (ac != 2)
    my_putstr("\n ! Vous devez avoir un argument au programme !\n\n");
  else if (!file_exists(av[1]))
    my_putstr("Votre fichier n'existe pas");
  else
    return (0);
  return (1);
}
