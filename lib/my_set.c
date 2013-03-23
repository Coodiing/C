/*
** my_set.c for my_set in /home/billet_a//bistromatique
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Fri Nov  2 04:51:26 2012 gregoire1 billet
** Last update Fri Nov  2 04:53:13 2012 gregoire1 billet
*/
char	*my_set(char *str, int len)
{
  len = len - 1;
  while (len >= 0)
    {
      str[len] = '0';
      len = len - 1;
    }
  return str;
}
