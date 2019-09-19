/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: b0n3 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:44:53 by b0n3              #+#    #+#             */
/*   Updated: 2019/09/19 19:09:35 by b0n3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int size;
	int index;

	index = 0;
	size = max - min;
	if (size < 0)
		return (NULL);
	range = (int *) malloc (size * sizeof (range));
	while (index < size )
	{
		range[index] = min;
		min++;
		index++;
	}
	return (range);
}
