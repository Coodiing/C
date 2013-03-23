/*
** my_strlen.c for my_strlen in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Thu Mar 21 16:22:02 2013 gregoire1 billet
** Last update Thu Mar 21 16:22:55 2013 gregoire1 billet
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (*str)
    {
      i++;
      str++;
    }
  return (i);
}
