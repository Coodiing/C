/*
** cleansign.c for cleansign in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Fri Oct 12 01:37:47 2012 gregoire1 billet
** Last update Sat Mar 23 22:29:32 2013 gregoire1 billet
*/

char	*cleansign1(char *str)
{
  while (*str == '+' || *str == '-')
    str++;
  return (str);
}
