/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:37:55 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 22:41:37 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
