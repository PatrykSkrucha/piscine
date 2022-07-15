/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 03:37:58 by marvin            #+#    #+#             */
/*   Updated: 2022/07/15 03:37:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int	i;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		write(1, &c, 1);
		c = c + 1;
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
