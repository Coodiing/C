/*
** count_char.c for count_char in /home/billet_a//rush
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Wed Oct 31 14:50:08 2012 gregoire1 billet
** Last update Wed Oct 31 14:50:47 2012 gregoire1 billet
*/

int             count_char(char *str, char del)
{
  int           i;

  i = 0;
  while (*str != '\0')
    {
      if (*str == del)
	i = i + 1;
      str = str + 1;
    }
  return i;
}
