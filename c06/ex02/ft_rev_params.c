/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:50:17 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 23:08:11 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	i = 0;
	while (j > 0)
	{
		ft_putchar(argv[j][i]);
		if (i < ft_strlen(argv[j]) - 1)
		{
			i++;
		}
		else
		{
			i = 0;
			j--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
