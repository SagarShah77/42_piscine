/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:44:25 by sshah             #+#    #+#             */
/*   Updated: 2018/03/21 21:05:20 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *str;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	str = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	*range = str;
	return (i);
}
