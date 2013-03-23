/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/billet_a//lib
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Mon Oct 29 17:22:52 2012 gregoire1 billet
** Last update Mon Oct 29 17:31:15 2012 gregoire1 billet
*/

#include <stdlib.h>

int	count_words(char *str, int len)
{
  int	count;

  count = 0;
  while (len > 0)
    {
      if (*str == '\0')
	count = count + 1;
      len = len - 1;
      str = str + 1;
    }
  return (count + 1);
}

char	*my_separate_words(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      while (str[i] == ' ')
	{
	  i = i + 1;
	}
      while ((str[i] >= 'a' && str[i] <= 'z') ||
 (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] >= '9'))
	{
	  i = i + 1;
	}
      str[i] = '\0';
      i = i + 1;
    }
  return str;
}

int	get_w_pos(int w, char *str)
{
  int	i;

  i = 0;
  while (w > 0)
    {
      while (*str != '\0')
	{
	  i = i + 1;
	  str = str + 1;
	}
      i = i + 1;
      str = str + 1;
      while (*str == ' ')
	{
	  str = str + 1;
	  i = i + 1;
	}
      w = w - 1;
    }
  return i;
}

char	**my_str_to_wordtab(char *str)
{
  int	words;
  char	**tab;
  int	i;
  int	w;

  w = 0;
  words = count_words(my_separate_words(str), my_strlen(str));
  tab = malloc((words + 1) * sizeof(char *));
  str = my_separate_words(str);
  while (i < words)
    {
      tab[i] = &str[get_w_pos(w, str)];
      i = i + 1;
      w = w + 1;
    }
  tab[i] = NULL;
  return tab;
}
