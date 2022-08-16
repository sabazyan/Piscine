/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:45:53 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/14 17:16:54 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	reverse(int num)
{
	int	symbol;
	int	result;

	result = 0;
	if (num < 0)
	{	
		write(1, "-", 1);
		num = num * (-1);
	}
	while (num > 0)
	{
		symbol = num % 10;
		num = num / 10;
		result = result * 10 + symbol;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		nb = reverse(nb);
	if (nb == 0)
	{
		c = '0';
		write(1, &c, 1);
	}	
	while (nb > 0)
	{
		c = nb % 10 + '0';
		nb = nb / 10;
		write(1, &c, 1);
	}
}
