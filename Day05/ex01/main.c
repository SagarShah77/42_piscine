/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:03:55 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 12:36:52 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	ft_putnbr(-2);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
