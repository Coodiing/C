/*
** my_strdup.c for my_strdup in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Wed Oct 10 14:34:20 2012 gregoire1 billet
** Last update Sat Mar 23 10:35:50 2013 gregoire1 billet
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char  a;
  char  *str1;
  int   i;

  i = 0;
  str1 = malloc(my_strlen(src) * sizeof(char));
  while (src[i] != '\0')
    {
       a = src[i];
       str1[i] = a;
       i++;
     }
  return str1;
}
