/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 09:14:08 by sshah             #+#    #+#             */
/*   Updated: 2018/03/17 09:25:17 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	printf("%d\n", ft_iterative_power(4, 2));
	printf("%d\n", ft_iterative_power(10, 2));
	printf("%d\n", ft_iterative_power(2, -8));
	printf("%d\n", ft_iterative_power(4, 5));
	return(0);
}
