/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:43:50 by gadoglio          #+#    #+#             */
/*   Updated: 2020/05/22 16:23:34 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void					*ft_memmove(void *dst, const void *source,
						size_t len)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)dst;
	src = (unsigned char *)source;
	i = 1;
	if (dest > src)
		while (i <= len && dst != source)
		{
			dest[len - i] = src[len - i];
			i++;
		}
	else
	{
		ft_memcpy(dst, source, len);
	}
	return (dst);
}
