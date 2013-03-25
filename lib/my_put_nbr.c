/*
** my_put_nbr.c for my_put_nbr in /home/billet_a//Jour_04
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct  4 19:23:43 2012 gregoire1 billet
** Last update Mon Mar 25 17:25:17 2013 gregoire1 billet
*/

void		my_put_nbr(int nb)
{
  int		cut;

  cut = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while ((nb / cut) > 9)
    {
      cut = cut * 10;
    }
  while (cut != 0)
    {
      my_putchar((nb / cut) % 10 + '0');
      cut = cut / 10;
    }
}
