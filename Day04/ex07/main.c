/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 10:10:09 by sshah             #+#    #+#             */
/*   Updated: 2018/03/17 19:31:02 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int index);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(32));
	return (0);
}
