/*
** dix_puissance.c for dix_puissance in /home/billet_a//Jour_04
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct  4 17:41:48 2012 gregoire1 billet
** Last update Mon Oct 29 17:27:42 2012 gregoire1 billet
*/

int     dix_puissance(int nb)
{
  int   a;

  a = 10;
  if (nb == 0)
      return 1;
  nb = nb - 1;
  while (nb > 0)
    {
      a = a * 10;
      nb = nb - 1;
    }
  return a;
}
