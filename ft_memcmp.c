/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:23:56 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 18:36:52 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function coompares the byte string s1 against byte string s2.
Both strings are assumed to be n bytes long*/
/* The returns an int value of zero if the comapred strings are identical,
else, it returns the difference in ascii values of the non identical strings*/
/* The 2 strings are treated as unsigned char as per the manual and the 
is also compensatimg for null strings values which returns a null*/
/* This function imitates the behaviour of the standard C library
function 'memcmp'*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*alpha;
	const char	*beta;
	size_t		i;

	alpha = s1;
	beta = s2;
	i = 0;
	if (!alpha && !beta)
		return (0);
	while ((alpha[i] != '\0' || beta[i] != '\0') && i < n)
	{
		if (alpha[i] != beta[i])
		{
			return (((unsigned char *)alpha)[i] - ((unsigned char *)beta)[i]);
		}
		i++;
	}
	return (0);
}