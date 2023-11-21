/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:30:44 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/20 18:38:10 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function counts the number of characters 
pointed to by the string 'str' and returns an integer value 'count'*/
/* This function imitates the standard C libraray function 'strlen'*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

