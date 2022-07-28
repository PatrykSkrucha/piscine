/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-str <nvan-str@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:05:53 by nvan-str          #+#    #+#             */
/*   Updated: 2022/07/24 21:38:37 by nvan-str         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> //malloc library
#include <fcntl.h> //open library
#include <unistd.h> //read and close library

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	write(1, str, c);
}

void	cut(char *str)
{
	int		control;
	char	number[100];
	int		i;
	int		j;

	i = 0;
	j = 0;
	control = 1;
	while (control)
	{
		if (str[j] > 96)
			control = 0;
		else
			j++;
	}
	control = 1;
	while (control)
	{
		if (str[j] < 58 && str[j] > 47)
			control = 0;
		else
		{
			number[i] = str[j];
			str++;
			i++;
		}
	}
	ft_putstr (number);
}
