/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerdos-s <jerdos-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:11:14 by jerdos-s          #+#    #+#             */
/*   Updated: 2022/08/07 19:36:15 by jerdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_char;
	unsigned char	*src_char;

	if (!dest || !src)
		return (NULL);
	i = 0;
	dest_char = (unsigned char *)dest;
	src_char = (unsigned char *)src;
	while (i < n)
	{
		dest_char[i] = src_char[i];
	}
	return (dest);
}