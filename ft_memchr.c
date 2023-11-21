/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:46:55 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 18:36:43 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks for the first occurence of 
'int c' (converted to an unsigned char)	*/
/* Its a void function like function ft_bzero but this has a return value 
because it has a pointer which makes the mains different	*/
/* The initial 's' declaration was converted to an 'unsigned char str'	*/
/* This function is similar to ft_strchr*/
/* The return value is a pointer to the byte located (specified by 'c')	*/
/*In the mains, the function is passed in the print function	*/
/* This function imitates the behaviour of the standard
C library function memchr	*/
/*	'i' is the string index	*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	g;
	size_t			i;

	i = 0;
	g = c;
	str = (unsigned char *) s;
	while (str[i] && i < n)
	{
		if (str[i] == g)
			return (str + i);
		i++;
	}
	return (0);
}