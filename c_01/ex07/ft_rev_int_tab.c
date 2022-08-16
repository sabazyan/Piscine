/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:59:29 by sabazyan          #+#    #+#             */
/*   Updated: 2022/02/15 09:43:47 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	var;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		var = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = var;
		i++;
	}
}
