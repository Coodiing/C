/*
** my_read.c for my_read in /home/billet_a//proj/lemin
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Tue Mar 19 16:54:36 2013 gregoire1 billet
** Last update Tue Mar 19 17:10:35 2013 gregoire1 billet
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "head.h"

/*
**  Renvoie le contenu d'un fichier sous forme de char *
*/
char		*my_read(char *file)
{
  int		fd;
  char		*buffer;

  buffer = malloc(200*sizeof(char));
  fd = open("/home/billet_a/proj/lemin/map.txt", O_NOFOLLOW);
  fd = read(fd, buffer, 4096);
  return (buffer);
}
