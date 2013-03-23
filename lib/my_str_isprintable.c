/*
** my_str_isprintable.c for my_str_isprintable in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Tue Oct  9 03:46:27 2012 gregoire1 billet
** Last update Mon Oct 29 17:17:51 2012 gregoire1 billet
*/

int	my_str_isprintable(char *str)
{
  while (*str != '\0')
    {
      if (*str > '~' || *str < '!')
	return 0;
      str = str + 1;
    }
  return 1;
}
