#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[1;0m"

void    ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int     *ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new_tab;

	i = 0;
	new_tab = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}

int ft_any(char **tab, int (*f)(char*))
{
	while (*tab != 0)
	{
		if (f(*(tab++)))
			return (1);
	}
	return (0);
}

int     ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int     ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = length + 1;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			i = length + 1;
	}
	if (i == length - 1)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(48 + n % 10);
}

int		ft_abs_half(int i)
{
	i = (i < 0 ? -i : i);
	return (i >> 1);
}

int		isupcase(char *str)
{
	if (!*str)
		return (1);
	return ('A' <= *str && *str <= 'Z' ? isupcase(str + 1) : 0);
}

void	ft_print(char *str, char *color)
{
	printf("%s%s%s\n", color, str, END);
}

int		cmp(int a, int b)
{
	return (b - a);
}

int		main(int ac, char **av)
{
	int		k;
	int		pi[] = {14, 15, 92, 65, 35, 89, 79, 32, 38, 46, 26, 43, 38, 32, 79, 50};
	int		tab[] = {10, 20, 30, 40};
	char	*words1[] = {"Hello", "World", "RTFM", "LMGIFY", "GIYF", "NSFW", 0};
	char	*words2[] = {"O miseras", "homini", "mentis", "O pectora", "caeca", 0};

	k = -1;
	while (++k < (ac == 1 ? 7 : ac))
		switch (ac == 1 ? k : atoi(av[k]))
		{
			case 1 :
				ft_putstr("Ex01 : Pi = 3,");
				ft_putstr(GREEN);
				ft_foreach(pi, 16, &ft_putnbr);
				ft_putstr(END);
				ft_putstr("...\n");
				break ;
			case 2 :
				ft_putstr("Ex02 : Expected \"5101520\" : \"");
				ft_foreach(ft_map(tab, 4, &ft_abs_half), 4, &ft_putnbr);
				ft_putstr("\"\n");
				break ;
			case 3 :
				ft_print("PLOP", GREEN);
				if (ft_any(words1, &isupcase) && !ft_any(words2, &isupcase))
					ft_print("[Ex03 OK]", GREEN);
				else
					ft_print(">>>[Ex03 FAIL]<<<", RED);
				break ;
			case 4 :
				if (ft_count_if(words1, &isupcase) == 4 && !ft_count_if(words2, &isupcase))
					ft_print("[Ex04 OK]", GREEN);
				else
					ft_print(">>>[Ex04 FAIL]<<<", RED);
				break ;
			case 5 :
				if (ft_is_sort(tab, 4, &cmp) && !ft_is_sort(pi, 16, &cmp))
					ft_print("[Ex05 OK]", GREEN);
				else
					ft_print(">>>[Ex05 FAIL]<<<", RED);
				break ;
		}
	return (0);
}
