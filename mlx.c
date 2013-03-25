/*
** mlx.c for mlx in /home/billet_a//proj/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Mon Mar 25 10:35:05 2013 gregoire1 billet
** Last update Mon Mar 25 18:19:23 2013 gregoire1 billet
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<mlx.h>
#include	"/home/billet_a/lib/header.h"
#include	"head.h"

/*
** Create an image of 20*20 an draw a square
*/
void            create_ant(t_param *ptr)
{
  int           x;
  int           y;

  x = 0;
  y = 0;
  while (y < 20)
    {
      while (x < 20)
        {
	  add_pixel_to_img(ptr, x, y, 0x00663333);
          x++;
        }
      y++;
      x = 0;
    }
}

/*
** Show an image of an ant previously created at position x and y
*/
void		show_ant(t_param *ptr, int x, int y)
{
  mlx_put_image_to_window(ptr->mlx_ptr, ptr->win_ptr, ptr->img_ptr, x, y);
}

/*
** Create a new window where we can insert maps
*/
void            nw_map(t_list *room)
{
  t_param	ptr;
  int		x;

  x = 30;
  check_error(&ptr);
  ptr.data = mlx_get_data_addr(ptr.img_ptr, &ptr.bpp, &ptr.size_line,
			       &ptr.endian);
  create_ant(&ptr);
  while (x < 720)
    {
      while (room)
	{
	  show_ant(&ptr, room->x, room->y);
	  room = room->next;
	}
      show_ant(&ptr, x, x);
      show_ant(&ptr, x - 30, x - 30);
      show_ant(&ptr, x + 30, x + 30);
      usleep(3000);
      mlx_clear_window(ptr.mlx_ptr, ptr.win_ptr);
      x++;
    }
}

void		check_error(t_param *ptr)
{
  if ((ptr->mlx_ptr = mlx_init()) == 0)
    {
      aff("Error while initializing mlx\n");
      exit(0);
    }
  if ((ptr->win_ptr = mlx_new_window(ptr->mlx_ptr, 800, 800, "window")) == 0)
    {
      aff("Error while creating new window\n");
      exit(0);
    }
  if ((ptr->img_ptr = mlx_new_image(ptr->mlx_ptr, 20, 20)) == 0)
    {
      aff("Error while creating new image\n");
      exit(0);
    }
}
void		add_pixel_to_img(t_param *ptr, int x, int y, unsigned int color)
{
   unsigned char a;
   unsigned char r;
   unsigned char g;
   unsigned char b;

   r = color % 256;
   g = color / 256 % 256;
   b = color / 256 / 256 % 256;
   a = color / 256 / 256 / 256 % 256;
   *(ptr->data + y * ptr->size_line + x * ptr->bpp / 8) = r;
   *(ptr->data + y * ptr->size_line + x * ptr->bpp / 8 + 1) = g;
   *(ptr->data + y * ptr->size_line + x * ptr->bpp / 8 + 2) = b;
   *(ptr->data + y * ptr->size_line + x * ptr->bpp / 8 + 3) = a;
}
