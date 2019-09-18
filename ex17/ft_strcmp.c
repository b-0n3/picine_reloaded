/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: b0n3 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 01:53:02 by b0n3              #+#    #+#             */
/*   Updated: 2019/09/18 16:18:39 by b0n3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length]!='\0')
		length++;
	return (length);
}
int	ft_strcmp(char *s1, char *s2)
{
	int size1;
	int size2;
	int i;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	i = 0;
	while (i <= size1 && i <= size2)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (size1 > size2)
		return (1);
	else if (size1 < size2)	
		return (-1);
	return (0);
}
