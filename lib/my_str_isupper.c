/*
** my_str_islower.c.c for my_str_islower in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Tue Oct  9 03:38:00 2012 gregoire1 billet
** Last update Tue Oct  9 21:12:26 2012 gregoire1 billet
*/

int	my_str_isupper(char *str)
{
  while (*str != '\0')
    {
      if (*str < 'A' || *str > 'Z')
	return 0;
      str = str + 1;
    }
  return 1;
}
