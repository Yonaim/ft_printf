/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:29:31 by yona              #+#    #+#             */
/*   Updated: 2022/09/12 12:36:11 by yeonhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*--------------- STANDARD HEADERS ----------------*/

# include <stddef.h>

/*-------------- FUNCTION PROTOTYPES -------------*/

int		ft_max(int a, int b);
int		ft_min(int a, int b);

size_t	ft_strlen(const char *str);
int		ft_strchr(const char *str, char c);
void	ft_str_toupper(char *str, size_t len);
char	*ft_strdup(const char *s1);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *dst, int c, size_t nbytes);

int		ft_atoi(const char **str);

#endif
