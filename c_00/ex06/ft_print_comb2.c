/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:16:11 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/13 13:24:54 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			print((a / 10) + '0');
			print((a % 10) + '0');
			print(' ');
			print((b / 10) + '0');
			print((b % 10) + '0');
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
