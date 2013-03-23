/*
** my_str_isnum.c for my_str_isnum in /home/billet_a//my_str_isnum
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Tue Oct  9 02:45:24 2012 gregoire1 billet
** Last update Tue Oct  9 02:59:31 2012 gregoire1 billet
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (i < my_strlen(str))
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  return 0;
	}
      i = i + 1;
    }
  return 1;
}
