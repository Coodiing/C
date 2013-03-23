/*
** my_evil_str.c for my_evil_str.c in /home/billet_a//Jour_04
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct  4 15:33:54 2012 gregoire1 billet
** Last update Thu Oct  4 17:29:05 2012 gregoire1 billet
*/

char	 my_evil_str(char *str)
{
  int	len;

  len = my_strlen(str) -1;
  while (len > 0)
    {
      my_swap(str, str + len);
      str = str + 1;
      len = len - 2 ;
    }
  str = str - (my_strlen(str) / 2);
}
