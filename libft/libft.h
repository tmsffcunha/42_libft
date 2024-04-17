/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:36:36 by tfelguei          #+#    #+#             */
/*   Updated: 2024/04/17 15:16:32 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int i);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void    *ft_memset(void *str, int c, size_t n);
int		ft_strlen(const char *s);

#endif