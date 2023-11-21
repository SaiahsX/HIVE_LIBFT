/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:29:39 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 18:35:52 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function checks if the argument 'p' is a printable character
from the ASCII table,then it returns a value of 1 if that is true 
and 0 if that is false.
*/
/* This fuction is to imitate the behaviour of the 
standard C library function 'isalnum'*/

int	ft_isprint(int p)
{
	if ((p >= 040 && p <= 077) || (p >= 100 && p <= 114))
	{
		return (1);
	}
	return (0);
}

