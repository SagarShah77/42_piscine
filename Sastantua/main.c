/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 12:30:20 by sshah             #+#    #+#             */
/*   Updated: 2018/03/18 12:41:54 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	sastantua(int size);

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
	while ((str[count] >= 48) && (str[count] <= 58))
	{
		number = (number * 10) + ((int)str[count] - 48);
		count = count + 1;
	}
	return (number * sign);
}


int 	main(int argc, char **argv)
{
	if (argc == 2)
		sastantua(ft_atoi(argv[1]));
	else
		ft_putchar('\n');
}
