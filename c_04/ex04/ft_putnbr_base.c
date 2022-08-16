/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:07:31 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/23 13:18:38 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	test_base(char	*base, int num)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
		i++;
	}
	if (num == 0)
		write(1, "0", 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int			i;
	int			j;
	int			arr[1000];
	long int	lnbr;

	i = 0;
	j = 0;
	lnbr = nbr;
	if (test_base(base, nbr) == 1)
		return ;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr *= -1;
	}
	while (base[j] != '\0')
		j++;
	while (lnbr > 0)
	{
		arr[i] = lnbr % j;
		lnbr /= j;
		i++;
	}
	while (--i != -1)
		write(1, &base[arr[i]], 1);
}
