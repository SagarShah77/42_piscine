/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 22:20:19 by sshah             #+#    #+#             */
/*   Updated: 2018/03/17 22:23:46 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		absolute(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		solve(int n, int col, int *hist)
{
	int i;
	int j;
	int count;

	count = 0;
	if (col == n)
	{
		count++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(hist[j] == i || absolute(hist[j], i) == col - j))
			j++;
		if (j < col)
		{
			i++;
			continue;
		}
		hist[col] = i;
		count += solve(n, col + 1, hist);
		i++;
	}
	return (count);
}

int		ft_eight_queens_puzzle(void)
{
	int hist[8];

	return (solve(8, 0, hist));
}
