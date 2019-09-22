/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: b0n3 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 01:01:26 by b0n3              #+#    #+#             */
/*   Updated: 2019/09/22 03:22:56 by b0n3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"
#define	BUFFER_SIZE 4096

int	main(int argc, char **argv)
{
	int fl;
	int buffer[BUFFER_SIZE + 1];
	int ret;
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if( argc == 2)
	{
		fl = open(argv[1], O_RDONLY);
		if (fl == -1)
			return (1);
		while ((ret = read(fl, buffer, BUFFER_SIZE)))
		{
			buffer[ret] = '\0';
			write(1, buffer, ret);
		}
		if(close(fl) == -1)
			return(1);
	}
	return (0);
}
