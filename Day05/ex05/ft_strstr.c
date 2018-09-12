/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:11:30 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 19:26:09 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;
	int s;

	i = 0;
	j = 0;
	s = 0;
	while (to_find[s])
		s++;
	if (s == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == s - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
