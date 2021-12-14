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
	void	*dest_ptr;
	void	*src_ptr;

	dest_ptr = dest;
	src_ptr = (void *)src;
	if (dest_ptr > src_ptr && src + n > dest)
	{
		src_ptr += n;
		dest_ptr += n;
		while (n--)
			*(char *)--dest_ptr = *(char *)--src_ptr;
	}
	else if (dest < src && dest + n >= src)
	{
		while (n--)
			*(char *)dest_ptr++ = *(char *)src_ptr++;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
