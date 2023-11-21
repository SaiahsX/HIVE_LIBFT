/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:31:21 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/21 20:30:49 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function contgiously allocates enough memory for 'count'
objects that are the 'size' bytes of memory each and returns a pointer to 
the allocated memory.	*/
/*	In this function, allocated memory is filled with bytes value of zero	*/
/*	This means an opportunity to call our premade function ft_bzero	*/
/*	To start, a void pointer to a variable 'pntr' is declared	*/
/*	This variable will be used to calculate malloc	*/
/*	In this function, some protective conditions are specified:
1.	check if the count or size is zero and return a NULL.
2.	check if the fraction SIZE_MAX/count is less than size, return NULL.
3.	After you have initialized the void variable 'pntr'. 
Check if its a Null & return a NULL.	*/
/*	To conclude this function, ft_bzero is used to 
zero all allocated memory bytes.	*/
/*	This function imitates the behaviour of the standard Clibrary funtion
calloc.	*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pntr;
	size_t	byte_size;
	size_t	max_num;

	max_num = SIZE_MAX;
	if (!count || !size)
		return (NULL);

	byte_size = count * size;

	if (max_num / count < size)
		return (NULL);

	pntr = malloc(byte_size);
	if (pntr == NULL)
		return (NULL);

	ft_bzero(pntr, (byte_size));
	return (pntr);
}
