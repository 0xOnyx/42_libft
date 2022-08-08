/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerdos-s <jerdos-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:17:57 by jerdos-s          #+#    #+#             */
/*   Updated: 2022/08/08 14:16:07 by jerdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_char;
	unsigned char	*src_char;

	if (!dest || !src)
		return (NULL);
	dest_char = (unsigned char *)dest;
	src_char = (unsigned char *)src;
	if (dest_char < src_char)
	{
		while (--n > 0)
			dest_char[n] = src_char[n];
	}
	else
	{
		while (--n > 0)
			*(dest_char++) = *(src_char++);
	}
	return (dest);
}
