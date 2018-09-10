/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 09:14:08 by sshah             #+#    #+#             */
/*   Updated: 2018/03/17 20:08:20 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("%d\n", ft_recursive_power(4, 2));
	printf("%d\n", ft_recursive_power(1, 2));
	printf("%d\n", ft_recursive_power(0, 100));
	printf("%d\n", ft_recursive_power(4, 5));
	return(0);
}
