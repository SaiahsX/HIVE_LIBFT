/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:31:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/21 17:59:03 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pntr;
	size_t	byte_size;

	if (!count || !size)
		return (ft_calloc(1, 1));

	byte_size = count * size;
	if (byte_size / count != size)
		return (0);

	pntr = malloc(byte_size);
	if (pntr == 0)
		return (0);

	ft_bzero(pntr, (count * size));
	return (pntr);
}
