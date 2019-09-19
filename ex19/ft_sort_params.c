/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: b0n3 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:04:54 by b0n3              #+#    #+#             */
/*   Updated: 2019/09/19 17:20:23 by b0n3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_putstr(char *str)
{
	int x;

	x = -1;
	while (str[++x] != '\0')
		ft_putchar(str[x]);
}
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

void		ft_swap(char **av, int i)
{
	char	*tmp;

	tmp = av[i];
	av[i] = av[i + 1];
	av[i + 1] = tmp;
}

int			main(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		if (ac > 2)
		{
			i = 0;
			while (++i < ac - 1)
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					ft_swap(av, i);
					i = 0;
				}
		}
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
