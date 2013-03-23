/*
** head.h for head in /home/billet_a//proj/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sat Mar 23 21:40:53 2013 gregoire1 billet
** Last update Sun Mar 24 00:14:09 2013 gregoire1 billet
*/

#ifndef _HEAD_H_
#define _HEAD_H_

int	file_exists(char *str);

struct	s_game
{
  char	*file;
  char	*fourmis;
  char  *map;
  int	inx;
  int	iny;
  int	outx;
  int	outy;
  char	*quadri;
  int	turn;
};
typedef struct s_game t_game;

t_game	*init(char *str);
char	*my_read(char *str);
char	*center(char *str, char replace, char *border, int size);
char	*addend(char *begin, char *end);
char	*my_strdup(char *str);
char	*add_space(char *str);
void	*xmalloc(int size);
#endif
