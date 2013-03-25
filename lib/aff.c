/*
** aff.c for aff in /home/billet_a//lib
** 
** Made by gregoire1 billet
** Login   <billet_a@epitech.net>
** 
** Started on  Thu Mar 21 18:57:05 2013 gregoire1 billet
** Last update Mon Mar 25 17:59:30 2013 gregoire1 billet
*/

#include	"header.h"

void		aff(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str++;
    }
}
