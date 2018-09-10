/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 10:10:09 by sshah             #+#    #+#             */
/*   Updated: 2018/03/17 19:23:55 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int index);

int	main(void)
{
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(19));
	return (0);
}
