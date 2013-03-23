/*
** my_strcpy.c for my_strcpy in /home/billet_a//Jour_06/ex_01
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Mon Oct  8 11:41:31 2012 gregoire1 billet
** Last update Sat Mar 23 22:28:19 2013 gregoire1 billet
*/

char	*my_strcpy(char *dest, char *src)
{
  int	count;

  count = 0;
  while (*src != '\0')
    {
      *dest = *src;
      src = src + 1;
      dest = dest + 1;
      count = count + 1;
    }
  dest = dest - count;
}
