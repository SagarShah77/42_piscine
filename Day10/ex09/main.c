/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 23:34:25 by sshah             #+#    #+#             */
/*   Updated: 2018/03/26 23:49:42 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "struct.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		ft_atoi(char *str)
{
	int sign;
	int numb;
	int count;

	sign = 1;
	numb = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\t' ||
			str[count] == '\f' || str[count] == '\v' || str[count] == '\r')
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count = count + 1;
	}
	while (str[count] >= 48 && str[count] < 58)
	{
		numb = numb * 10 + ((int)str[count] - 48);
		count = count + 1;
	}
	return (numb * sign);
}

int		ft_cal(int num1, char *o, int num2)
{
	int i;

	i = 0;
	if (*o == '+' || *o == '-' || *o == '*' || *o == '/' || *o == '%')
	{
		while (i < 5)
		{
			if (g_opp[i].oper == *o)
				return (g_opp[i].f(num1, num2));
			i++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		numb1;
	int		numb2;
	char	*operator;

	if (argc != 4)
		return (0);
	numb1 = ft_atoi(argv[1]);
	numb2 = ft_atoi(argv[3]);
	operator = argv[2];
	if (numb2 == 0 && *operator == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (numb2 == 0 && *operator == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_cal(numb1, operator, numb2));
	ft_putchar('\n');
	return (0);
}
