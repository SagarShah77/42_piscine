/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 09:49:19 by sshah             #+#    #+#             */
/*   Updated: 2018/03/16 13:29:54 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int number;
	int count;

	sign = 1;
	number = 0;
	count = 0;
	while ((str[count] == ' ') || (str[count] == '\n') || (str[count] == '\t')
		|| (str[count] == '\v') || (str[count] == '\f') || (str[count] == '\r'))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count = count + 1;
	}
	while (str[count] != '\0' && (str[count] >= 48 && str[count] <= 58))
	{
		number = (number * 10) + ((int)str[count] - 48);
		count = count + 1;
	}
	return (number * sign);
}
