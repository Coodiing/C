/*
** my_putstr.c for my_putstr in /home/billet_a//Jour_04
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct  4 15:10:02 2012 gregoire1 billet
** Last update Thu Oct 11 19:00:17 2012 gregoire1 billet
*/

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
