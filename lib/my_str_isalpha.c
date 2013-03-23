/*
** my_str_isalpha.c for my_str_isalpha in /home/billet_a/
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Tue Oct  9 02:15:43 2012 gregoire1 billet
** Last update Thu Oct 11 19:03:53 2012 gregoire1 billet
*/

int	my_str_isalpha(char *str)
{
  while (*str != '\0')
    {
      if ((*str > 'z' || *str < 'a') && (*str > 'Z' || *str < 'A'))
	{
	  return 0;
	}
      str = str + 1;
    }
  return 1;
}
