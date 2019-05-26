/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft.h                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 14:32:37 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 14:32:37 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_swap(int *a, int *b);
int				ft_atoi(char *str);
int				ft_wordcnt(char *str);
int				ft_strcmp(char *s1, char *s2);
unsigned int	ft_strlen(char *str);
char 			*ft_strcat(char *dest, char *src);
char			*itoa(int i, char b[]);

#endif