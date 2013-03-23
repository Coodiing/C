/*
** my_sort_params.c for my_sort_params in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct 11 23:29:08 2012 gregoire1 billet
** Last update Mon Oct 29 17:54:49 2012 gregoire1 billet
*/

int	is_bigger_first(char *str, char *str1)
{
  while (*str == *str1 && *str != '\0' && *str1 != '\0')
    {
      str = str + 1;
      str1 = str1 + 1;
    }
  if (*str > *str1)
    return 1;
  else
    return 0;
}
void	aff_params(int ac, char **av, int i)
{
  while (i <= (ac - 1))
    {
      my_putstr(av[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

void	my_sort_params(int argc, char *argv[])
{
  int	i;
  char	*tmp;
  int	n;
  n = 0;
  i = 0;
  while (i < argc)
    {
      while ((i + n) < argc)
	{
	  if (is_bigger_first(argv[i], argv[i + n]))
	    {
	      tmp = argv[i];
	      argv[i] = argv[i + n];
	      argv[i + n] = tmp;
	    }
	  n = n + 1;
	}
      n = 1;
      i = i + 1;
    }
  i = 0;
  aff_params(argc, argv, i);
}
