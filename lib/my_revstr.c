/*
** my_revstr.c for my_revstr in /home/billet_a//Jour_06/ex_03
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Mon Oct  8 12:21:23 2012 gregoire1 billet
** Last update Mon Oct 29 17:56:07 2012 gregoire1 billet
*/

char	*my_revstr(char *str)
{
  int	count;
  int	len;
  int	tmp;

  count = 0;
  len = my_strlen(str);

  while ( count < len / 2)
    {
      my_swap(str + count, str + len - count - 1);
      count = count + 1;
    }
  my_putstr(str);
}
