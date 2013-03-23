/*
** my_aff_params.c for my_aff_params in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Wed Oct 10 15:37:50 2012 gregoire1 billet
** Last update Fri Mar 22 12:57:43 2013 gregoire1 billet
*/

int	my_aff_params(int argc, char *argv[])
{
  int	i;

  i = 0;
  while (i < argc)
    {
      aff(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
