/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:37:32 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/22 15:32:33 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "header.h"

int	main(int	argc, char **argv)
{
	if (argc != 2)
		write(1, "Error", 5);
	else
	{
		int	open_;
		int	dict;
		char	arr[1000];
		int	i;
		char	arg[1000];
		int	number;
		char	str[1000];

		open_ = open("numbers.dict", O_RDONLY);
		dict = read(open_, arr, 1000);


		i = 0;
		while (argv[1][i] != '\0')
		{
			arg[i] = argv[1][i];
			i++;
		}

		number = atoi_f(arg);
		to_char(number, str);

		putstring(find(arr, str));

		close(open_);
	}
	return (0);
}
