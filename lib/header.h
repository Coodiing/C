/*
** head.h for head in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sat Mar 23 22:27:32 2013 gregoire1 billet
** Last update Mon Mar 25 18:11:28 2013 gregoire1 billet
*/

#ifndef HEADER_H_
#define HEADER_H_

void		*xmalloc(int size);
int		getsign(char *str);
char		*fusion(char *begin, char *end);
char		*center(char *str, char replace, char *border, int size);
void		aff(char *str);
void		my_put_nbr(int nb);

#endif
