/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-str <nvan-str@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:37:02 by nvan-str          #+#    #+#             */
/*   Updated: 2022/07/24 22:10:43 by nvan-str         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> //malloc library
#include <fcntl.h> //open library
#include <unistd.h> //read and close library

void	cut(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (str);
}

void	ft_read(int sz, char	*c, char *number, char **argv)
{
	char	*dict;
	int		i;

	i = 0;
	dict = argv[1];
	while (argv[2][i])
	{
		number[i] = argv[2][i];
		i++;
	}
	c = malloc(690);
	sz = read(open(dict, O_RDONLY), c, 690);
	c[sz] = '\0';
	cut(ft_strstr(c, number));
	free (c);
	return ;
}

int	main(int argc, char **argv)
{
	int		sz;
	char	*c;
	int		i;
	char	number[690];

	c = NULL;
	sz = 0;
	i = 0;
	if (argc < 2)
		return (0);
	if (argc == 3)
	{
		ft_read(sz, c, number, argv);
	}
	while (argv[1][i])
	{
		number[i] = argv[1][i];
		i++;
	}
	c = malloc(690);
	sz = read(open("numbers.dict", O_RDONLY), c, 690);
	c[sz] = '\0';
	cut(ft_strstr(c, number));
	free (c);
}
