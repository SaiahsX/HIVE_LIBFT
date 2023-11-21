/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:21:18 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/21 20:47:24 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	str_s1_size;
	char	*s2;

	str_s1_size = ft_strlen(s1);
	s2 = malloc (str_s1_size + 1);

	if (!s2)
		return (NULL);
	return (ft_memcpy(s2, s1, str_s1_size +1));
}
