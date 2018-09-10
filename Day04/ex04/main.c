/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 10:10:09 by sshah             #+#    #+#             */
/*   Updated: 2018/03/17 11:00:00 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(-4));
	printf("%d\n", ft_fibonacci(0));
	return (0);
}
