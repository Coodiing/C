/*
** my_sort_in_tab.c for my_sort_in_tab in /home/billet_a/my_sort_in_tab
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Fri Oct 12 01:55:41 2012 gregoire1 billet
** Last update Mon Oct 29 17:28:56 2012 gregoire1 billet
*/

void	my_sort_in_tab(int *tab, int size)
{
  int	i;
  int	tmp;
  int	n;

  i = 0;
  n = 1;
  while (i < size - 1)
    {
      while (i + n <= size - 1)
	{
	  if (tab[i] > tab[i + n])
	    {
	      tmp = tab[i];
	      tab[i] = tab[i + n];
	      tab[i + n] = tmp;
	    }
	  n = n + 1;
	}
      n = 1;
      i = i + 1;
    }
}
