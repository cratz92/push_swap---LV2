/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:09:27 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/04/14 12:58:21 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destSize)
{
	size_t	destLen;
	size_t	srcLen;
	size_t	i;

	i = 0;
	destLen = ft_strlen(dest);
	srcLen = ft_strlen(src);
	if (destSize < 1)
		return (srcLen + destSize);
	else if (destSize < destLen)
		return (srcLen + destSize);
	else
	{
		while ((src[i] != '\0') && (destLen + i < destSize - 1))
		{
			dest[destLen + i] = src[i];
			i++;
		}
	}
	dest[destLen + i] = '\0';
	return (destLen + srcLen);
}
