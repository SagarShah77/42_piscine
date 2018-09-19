/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:32:41 by sshah             #+#    #+#             */
/*   Updated: 2018/03/26 21:14:28 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *nt;

	i = 0;
	nt = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		nt[i] = f(tab[i]);
		i++;
	}
	return (nt);
}
