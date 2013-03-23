/*
** my_square_root.c for my_square_root in /home/billet_a//my_square_root
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct 11 22:46:23 2012 gregoire1 billet
** Last update Thu Oct 11 22:49:27 2012 gregoire1 billet
*/

int	my_square_root(int nb)
{
  int	x;

  x = 1;
  while ((x * x) < nb && (x * x) != nb)
    x = x + 1;
  if ((x * x) == nb)
    return x;
  else
    return 0;
}
