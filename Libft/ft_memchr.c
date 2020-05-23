/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:08:37 by gadoglio          #+#    #+#             */
/*   Updated: 2020/05/22 16:23:10 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	size_t	i;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		if (*st == c)
			return (st);
		else
			st++;
		i++;
	}
	return (0);
}
