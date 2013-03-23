/*
** my_getnbr.c for my_getnbr in /home/billet_a/my_getnbr
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Thu Oct 11 23:49:41 2012 gregoire1 billet
** Last update Sat Mar 23 20:41:02 2013 gregoire1 billet
*/

int	count_num(char *str)
{
  int	count;

  count = 0;
  while (*str >= '0' && *str <= '9')
    {
      count = count + 1;
      str = str + 1;
    }
  return count;
}

int	getsign(char *str)
{
  int	count;

  count = 0;
  while (*str == '+' || *str == '-')
    {
      if (*str == '-')
	count++;
      str++;
    }
  while (count >= 2)
    count = count - 2;
  return (count);
}

int	my_getnbr(char *str)
{
  int	nb;
  int	count;
  int	neg;

  neg = getsign(str);
  nb = 0;
  count = count_num(str);
  while (count > 0)
    {
      nb = nb + (*str - 48) * dix_puissance(count - 1);
      count = count - 1;
      str = str + 1;
    }
  if (neg == 1)
      nb = -nb;
  if (nb >= -2147483648 && nb <= 2147483647)
    return nb;
  else
    return 0;
}
