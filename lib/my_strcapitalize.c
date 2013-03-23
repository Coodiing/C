/*
** my_strcapitalize.c for my_strcapitalize in /home/billet_a//my_strcapitalize
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Tue Oct  9 01:52:08 2012 gregoire1 billet
** Last update Thu Oct 11 20:24:00 2012 gregoire1 billet
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (i < my_strlen(str))
    {
      if ((str[i - 1] == ' ' || str[i - 1] == '-' ||str[i - 1] == '+' ||
	  i == 0) && str[i] <= 'z' && str[i] >= 'a')
	{
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return str;
}
