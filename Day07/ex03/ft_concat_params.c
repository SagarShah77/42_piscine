/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 21:06:57 by sshah             #+#    #+#             */
/*   Updated: 2018/03/21 22:13:05 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size(int argc, char **argv)
{
	int i;
	int j;
	int ts;

	i = 1;
	ts = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ts++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		ts += argc - 2;
	return (ts);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		ts;
	char	*str;

	ts = size(argc, argv);
	str = (char*)malloc(sizeof(char) * (ts + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
