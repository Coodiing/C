/*
** composing_char.c for only_composing_char in /home/billet_a//rush
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Sun Oct 28 16:50:13 2012 gregoire1 billet
** Last update Sun Nov  4 00:40:47 2012 gregoire1 billet
*/

int     composing_char(char *str, char *composing_char)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i] != '\0' && composing_char[j] != '\0')
    {
      if (composing_char[j] != str[i])
	{
	  if (j < my_strlen(composing_char) - 1)
	    {
	      if (composing_char[j] == str[i])
		return (1);
	      j = j + 1;
	    }
	  else
	    {
	      j = 0;
	      i = i + 1;
	    }
	}
      else
	{
	  return (1);
	  i = i + 1;
	  j = 0;
	}
    }
  return (0);
}
