/*
** xmalloc.c for xmalloc in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sat Mar 23 22:13:40 2013 gregoire1 billet
** Last update Sat Mar 23 22:41:41 2013 gregoire1 billet
*/

#include	<stdlib.h>
#include	"header.h"

void            *xmalloc(int size)
{
  void          *temp;

  if ((temp = malloc(size)) == NULL)
    exit (-1);
  return (temp);
}
