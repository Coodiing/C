/*
** head.h for head in /home/billet_a//proj/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Sat Mar 23 21:40:53 2013 gregoire1 billet
** Last update Mon Mar 25 18:21:56 2013 gregoire1 billet
*/

#ifndef _HEAD_H_
#define _HEAD_H_

typedef struct s_list
{
  char		*name;
  int		x;
  int		y;
  struct s_list *next;
}		t_list;

typedef struct	s_game
{
  t_list	*rooms;
  char		*file;
  int		turn;
}		t_game;

typedef struct  s_param
{
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img_ptr;
  char		*data;
  int		wall;
  int		bpp;
  int		size_line;
  int		endian;
}               t_param;

t_game		*init(char *str);
int		file_exists(char *str);
char		*my_read(char *str);
char		*center(char *str, char replace, char *border, int size);
char		*addend(char *begin, char *end);
char		*my_strdup(char *str);
char		*add_space(char *str);
void		*xmalloc(int size);
void		nw_map(t_list *room);
void		putsuare(void *init, void *window, int size, int posx, int posy);
void		put_room(t_param *ptr, int posx, int posy);
t_list		*parse(char *file);
void		check_error(t_param *ptr);
void		add_pixel_to_img(t_param *ptr, int x, int y, unsigned int color);
void		add_room(t_list **begin, char *name, int x, int y);
void		show_rooms(t_list *begin);
int		error(int ac, char **av);
void		debug(t_game *game);

#endif
