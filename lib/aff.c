/*
** aff.c for aff in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Thu Mar 21 18:57:05 2013 gregoire1 billet
** Last update Fri Mar 22 10:58:53 2013 gregoire1 billet
*/

void		aff(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str++;
    }
}
