/*
** my_show_wordtab.c for my_show_wordtab in /home/billet_a//my_show_wordtab
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Sat Oct 13 01:12:57 2012 gregoire1 billet
** Last update Sat Oct 13 01:37:20 2012 gregoire1 billet
*/
void	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
