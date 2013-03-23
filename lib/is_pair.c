/*
** is_pair.c for is_pair in /home/billet_a//colle
**
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
**
** Started on  Sat Oct  6 15:16:13 2012 gregoire1 billet
** Last update Sat Oct  6 15:17:27 2012 gregoire1 billet
*/
int     is_pair(int a)
{
  int   tmp;

  tmp = a / 2;
  tmp = tmp * 2;
  if (tmp == a)
    {
      return 1;
    }
  else
     {
       return 0;
     }
}
