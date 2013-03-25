/*
** center.c for center in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Mon Mar 25 17:46:34 2013 gregoire1 billet
** Last update Mon Mar 25 17:49:24 2013 gregoire1 billet
*/

#include	"header.h"

/*
** Centre str sur un plateau de longueur size. str sera entouré par border puis      
** le caractère replace                                                              
*/
char            *center(char *str, char replace, char *border, int size)
{
  int           len;
  int           tmp;
  char          *centertext;
  int           i;
  int           maxw;
  int           j;
  int           z;

  maxw = size - 2 * my_strlen(border);
  i = 0;
  centertext = xmalloc(80 * sizeof(char *));
  z = (80-size) / 2;
  while (z > 0)
    {
      centertext[i] = ' ';
      i++;
      z--;
    }
  z = (80 - size) / 2;
  j = 0;
  if (!is_pair(my_strlen(str)))
    str = fusion(str, " ");
  len = (maxw - my_strlen(str)) / 2;
  tmp = len;
  while (border[j] != '\0')
    {
      centertext[i] = border[j];
      i++;
      j++;
    }
  if ((tmp * 2) != maxw - my_strlen(str))
    {
      centertext[i] = replace;
      i++;
    }
  while (tmp > 0)
    {
      centertext[i] = replace;
      i++;
      tmp--;
    }
  while (*str)
    {
      centertext[i] = *str;
      i++;
      str = str + 1;
    }
  tmp = len;
  while (tmp > 0)
    {
      centertext[i] = replace;
      i++;
      tmp--;
    }
  j = 0;
  while (border[j] != '\0')
    {
      centertext[i] =  border[j];
      i++;
      j++;
    }
  while (z > 0)
    {
      centertext[i] = ' ';
      z--;
      i++;
    }
  centertext[i] = '\n';
  return (centertext);
}
