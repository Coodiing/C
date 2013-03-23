/*
** my_rev_params.c for my_rev_params in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct 11 23:36:25 2012 gregoire1 billet
** Last update Mon Oct 29 17:29:18 2012 gregoire1 billet
*/
void	my_rev_params(int argc, char *argv[])
{
  while (argc > 0)
    {
      my_putstr(argv[argc - 1]);
      my_putchar('\n');
      argc = argc - 1;
    }
}
