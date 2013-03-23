/*
** my_strcmp.c for my_strcmp in /home/billet_a//Jour_06/ex_05
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Mon Oct  8 16:42:38 2012 gregoire1 billet
** Last update Mon Oct 29 17:24:28 2012 gregoire1 billet
*/

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0')
    {
      if (*s1 == *s2)
	{
	  s1 = s1 + 1;
	  s2 = s2 + 1;
	}
      else
	{
	  return (*s1 - *s2);
	}
    }
}
