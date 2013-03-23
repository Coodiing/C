/*
** add_space.c for add_space in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Fri Mar 22 12:55:09 2013 gregoire1 billet
** Last update Fri Mar 22 12:56:08 2013 gregoire1 billet
*/

#include <stdlib.h>

/*
** Ajoute des espaces entre chaque lettre de str
*/
char            *add_space(char *str)
{
  char          *nwstr;
  int           i;
  int           j;

  i = 0;
  j = 0;
  nwstr = malloc((2 * my_strlen(str)) * sizeof(char *));
  while (str[i] != '\0')
    {
      nwstr[j] = ' ';
      i++;
      j++;
      nwstr[j] = str[i];
      j++;
    }
  return (nwstr);
}
