/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: b0n3 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:21:55 by b0n3              #+#    #+#             */
/*   Updated: 2019/09/19 17:35:14 by b0n3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	ft_strdup(char *src)
{
	char	*dst;
	int	index;
	int	size;

	size = ft_strlen(src);
	index = 0;
	dst = (char *) malloc(size *sizeof(*dst));
	if (dst == NULL)
		return (NULL);
	while (src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst [index] = '\0';
	return (dst);
}
