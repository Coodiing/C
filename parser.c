/*
** parser.c for parser in /home/billet_a//proj/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sun Mar 24 00:10:00 2013 gregoire1 billet
** Last update Mon Mar 25 18:08:54 2013 gregoire1 billet
*/

#include	"head.h"

/*
** Parse le fichier de conf en paramètre et récupère
** Le nom, les coordonnées et les liasions entre chaque salle
*/
t_list		*parse(char *file)
{
  t_list        *begin;

  begin = xmalloc(sizeof(t_list));
  begin = 0;
  add_room(&begin, "Entry", 0, 0);
  add_room(&begin, "Exit", 760, 760);
  return (begin);
}
