/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 12:15:15 by sshah             #+#    #+#             */
/*   Updated: 2018/03/15 21:47:14 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printfurther(int *arr, int n, int j)
{
	int i;

	while (j && j >= 0)
	{
		while (arr[j] == (9 + j - (n - 1)) && j >= 0)
			j = j - 1;
		if (j < 0)
			break ;
		arr[j] = arr[j] + 1;
		i = j;
		while (i++ < n)
			arr[i] = arr[i - 1] + 1;
		j = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = -1;
		while (++i < n)
			ft_putchar(arr[i] + 48);
	}
}

void	ft_print_combn(int n)
{
	int i;
	int j;
	int	arr[n];

	j = n - 1;
	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
	{
		arr[i] = i;
		ft_putchar(arr[i] + 48);
	}
	ft_printfurther(arr, n, j);
	ft_putchar('\n');
}