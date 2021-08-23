/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:21:59 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/15 02:21:59 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*destPtr;
	void	*srcPtr;

	destPtr = dest;
	srcPtr = (void *)src;
	if (destPtr > srcPtr && src + n > dest)
	{
		srcPtr += n;
		destPtr += n;
		while (n--)
			*(char *)--destPtr = *(char *)--srcPtr;
	}
	else if (dest < src && dest + n >= src)
	{
		while (n--)
			*(char *)destPtr++ = *(char *)srcPtr++;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
