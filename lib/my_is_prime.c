/*
** my_is_prime.c for my_is_prime in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct 11 21:30:20 2012 gregoire1 billet
** Last update Thu Oct 11 21:39:38 2012 gregoire1 billet
*/
int	my_is_prime(int	nb)
{
  int	diviseur;

  diviseur = 2;

  while (diviseur < nb)
    {
      if ((nb % diviseur) == 0)
	{
	  return 0;
	}
      diviseur = diviseur + 1;
    }
  return 1;
}
