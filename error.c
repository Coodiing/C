/*
** error.c for error in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:51:41 2013 gregoire1 billet
** Last update Mon Mar 25 18:08:33 2013 gregoire1 billet
*/

#include	"/home/billet_a/lib/header.h"
#include	"head.h"

/*
** Vérifie l'existence du fichier envoyé en paramètre
*/
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
    aff("\n ! Vous devez avoir un argument au programme !\n\n");
  else if (!file_exists(av[1]))
    aff("Votre fichier n'existe pas");
  else
    return (0);
  return (1);
}
