/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:39:22 by sshah             #+#    #+#             */
/*   Updated: 2018/03/19 21:31:24 by sshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lcase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int		ucase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int		ocase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (lcase(str[i]) && j == 0)
			str[i] -= 32;
		else if (ucase(str[i]) && j == 1)
			str[i] += 32;
		if (!(ocase(str[i])))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
