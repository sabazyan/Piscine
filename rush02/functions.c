/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcions.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:38:57 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/22 10:39:06 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	symbol_count(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*find(char	*str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

void	putstring(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] > 96 && str[i] < 123)
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar('-');
		putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		putchar(nb + '0');
}

int	atoi_f(char	*str)   // "   --++---1556bfhbg4-5656"
{
	int	i;
	int	num;
	int	sym;
	int	count;

	i = 0;
	num = 0;
	count = 0;
	while (str[i] == 32 || str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sym = str[i] - '0';
		num = num * 10 + sym;
		i++;
	}
	if (count % 2 == 1)
		num *= -1;
	return (num);
}

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

char	*to_char(int num,char *answ)
{
	num = reverse(num);
	int i = 0;
	while (num != 0)
	{
		answ[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	answ[i] = '\0';
	return (answ);
}
