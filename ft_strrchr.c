/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerdos-s <jerdos-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:46:35 by jerdos-s          #+#    #+#             */
/*   Updated: 2022/08/07 19:40:14 by jerdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*current;

	current = (char *)s + ft_strlen(current);
	while (*current != c)
	{
		if (current == s)
			return (NULL);
		current--;
	}
	return (current);
}
