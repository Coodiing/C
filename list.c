/*
** list.c for list in /home/billet_a//proj/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sun Mar 24 14:54:51 2013 gregoire1 billet
** Last update Mon Mar 25 18:15:16 2013 gregoire1 billet
*/

#include	<stdlib.h>
#include	"/home/billet_a/lib/header.h"
#include	"head.h"

/*
** Add a room in the list with ne name, pos x and pos y
*/
void		add_room(t_list **begin, char *name, int x, int y)
{
  t_list	*new_elem;

  new_elem = xmalloc(sizeof(new_elem));
  new_elem->name = name;
  new_elem->x = x;
  new_elem->y = y;
  new_elem->next = *begin;
  *begin = new_elem;
}

/*
** Show all the rooms with their name and coord
*/
void		show_rooms(t_list *begin)
{
  while (begin)
    {
      aff(begin->name);
      my_put_nbr(begin->x);
      my_put_nbr(begin->y);
      begin = begin->next;
    }
}
