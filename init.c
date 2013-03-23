/*
** init.c for init in /home/billet_a//Projects/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 15:52:43 2013 gregoire1 billet
** Last update Sat Mar 23 21:36:55 2013 gregoire1 billet
*/

#include <stdlib.h>
#include "head.h"

char		*addend(char *end, char *begin)
{
  char		*total;
  int		i;

  i = 0;
  total = malloc((my_strlen(begin) + my_strlen(end)) * sizeof(char *));
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

char		*center(char *str, char replace, char *border, int size)
{
  int		len;
  int		tmp;
  char		*centertext;
  int		i;
  int		maxw;
  int		j;
  int		z;

  maxw = size - 2 * my_strlen(border);
  i = 0;
  centertext = malloc(80 * sizeof(char *));
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
     str = addend(str," ");
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

char		*add_salle(int x, int y, char *nw)
{
  int		i;

  i = 0;
  while (x > 0)
    {
      i++;
      x--;
    }
  while (y > 0)
    {
      i = i + 11;
      y--;
    }
  nw[i] = '1';
  return (nw);
}

char		*pos_salles(char *file)
{
  int		i;
  int		j;
  int		k;
  int		count;
  char		*nw;
  int		tmpnb;


  nw = malloc(100 * sizeof(char *));
  i = 0;
  j = 0;
  while (j < 9)
    {
      while (k < 11)
	{
	  nw[i] = '*';
	  k++;
	  i++;
	}
      k = 0;
      nw[i] = '\n';
      i++;
      j++;
    }
      i = 0;
  count = 0;
  while (count < 2)
    {
      if (file[i] == '\n')
	count++;
      i++;
    }

  nw = add_salle(10, 0, nw);


  nw[0] = file[i];
  return (nw);
}

char		*generate_map(char *file)
{
  char		*map;
  char		*quadri;

  quadri = pos_salles(file);
  /*quadri = add_space(quadri);*/
  return (quadri);
}

t_game		*init(char *file)
{
  t_game	*game;
  char		*buffer;

  game = malloc(sizeof(t_game));
  game->turn = 0;
  game->file = my_read(file);
  game->map = generate_map(game->file);
  game->fourmis = buffer;
  return(game);
}
