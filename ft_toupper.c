/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerdos-s <jerdos-s@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:18:06 by jerdos-s          #+#    #+#             */
/*   Updated: 2022/08/07 03:18:23 by jerdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
