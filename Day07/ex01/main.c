/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:20:24 by sshah             #+#    #+#             */
/*   Updated: 2018/03/21 20:39:41 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *arr;
	int i;

	arr = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
	return (0);
}
