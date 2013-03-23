/*
** fusion.c for fusion in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sat Mar 23 22:20:25 2013 gregoire1 billet
** Last update Sat Mar 23 22:38:47 2013 gregoire1 billet
*/

#include	<stdlib.h>
#include	"header.h"

/*
** Fusionne deux chaines de caractères
*/
char            *fusion(char *begin, char *end)
{
  char          *total;
  int           i;

  i = 0;
  total = xmalloc((my_strlen(begin) + my_strlen(end)) * sizeof(char *));
  while (*begin)
    {
      total[i] = *begin;
      begin++;
      i++;
    }
  while (*end)
    {
      total[i] = *end;
      end++;
      i++;
    }
  return (total);
}
