/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 16:59:49 by sshah             #+#    #+#             */
/*   Updated: 2018/03/18 19:39:20 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_loop(char c, int *data, int idx)
{
	int i;
	int knob;

	i = 0;
	while (i < data[idx])
	{
		if (idx == 2 && data[2] >= 5 && i == data[idx] - 2)
		{
			knob = data[4] - (data[4] - 1) / 2;
			if (data[5] == knob + 1)
				ft_putchar('$');
			else
				ft_putchar(c);
		}
		else
			ft_putchar(c);
		i++;
	}
}

void	print_set(int *data, int size)
{
	if (data[4] == size)
	{
		if (size % 2 == 0 && data[5] == 3)
		{
			data[2] = size - 1 + (size % 2);
			data[1] = data[1] - (data[2] / 2) - 1;
			data[3] = data[1];
		}
		else if (size % 2 == 1 && data[5] == 2)
		{
			data[2] = size - 1 + (size % 2);
			data[1] = data[1] - (data[2] / 2) - 1;
			data[3] = data[1];
		}
	}
	print_loop(' ', data, 0);
	ft_putchar('/');
	print_loop('*', data, 1);
	print_loop('|', data, 2);
	print_loop('*', data, 3);
	ft_putchar(92);
	ft_putchar('\n');
}

int		get_boost(int size)
{
	int calc;

	calc = size / 2;
	return (++calc);
}

int		totaling(int size, int height_or_boost)
{
	if (height_or_boost == 1)
	{
		if (size == 1)
			return (3);
		return ((size + 2) + totaling(size - 1, 1));
	}
	else
	{
		if (size == 1)
			return (0);
		return (get_boost(size) + totaling(size - 1, 0));
	}
}

/*
** data array:
** 0 = Space = Sum of heights - 1 + Sum of boosts
** 1 = Stars on Left, 2 = Door, 3 = Stars on Right
** 4 = Boosts, 5 = Steps
*/

void	sastantua(int size)
{
	int data[6];

	if (size == 0)
		return ;
	data[0] = totaling(size, 1) - 1 + totaling(size, 0);
	data[1] = 1;
	data[2] = 0;
	data[3] = 0;
	data[4] = 1;
	while (data[4] <= size)
	{
		data[5] = 0;
		while (data[5] < data[4] + 2)
		{
			print_set(data, size);
			data[5]++;
			data[1]++;
			data[3]++;
			data[0]--;
		}
		data[4]++;
		data[0] = data[0] - get_boost(data[4]);
		data[1] = data[1] + get_boost(data[4]);
		data[3] = data[3] + get_boost(data[4]);
	}
}
