/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:33 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 18:35:39 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function checks if the argument is an ASCII character*/
/* It returns 1 if its true and 0 if its false */
/* This function imitates the standard C library function 'isascii' */

int	ft_isascii(int a)
{
	if (a >= 000 && a <= 0177)
	{
		return (1);
	}
	return (0);
}
