/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bruteforce.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdong <pdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 16:15:54 by pdong         #+#    #+#                 */
/*   Updated: 2022/07/17 15:41:35 by pdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	lineswapper(int *input, int n)
{
	const int	arr[24][4] = {
	{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, {1, 3, 4, 2},
	{1, 4, 2, 3}, {1, 4, 3, 2}, {2, 1, 3, 4}, {2, 1, 4, 3},
	{2, 3, 1, 4}, {2, 3, 4, 1}, {2, 4, 1, 3}, {2, 4, 3, 1},
	{3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4}, {3, 2, 4, 1},
	{3, 4, 1, 2}, {3, 4, 2, 1}, {4, 1, 2, 3}, {4, 1, 3, 2},
	{4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1}};
	int			i;

	i = 0;
	while (i < 4)
	{
		input[i] = arr[n][i];
		i++;
	}
}

int	error1(int arr[4][4], int **InputArray)
{
	int	y;
	int	x;
	int	counter;
	int	max;

	x = 0;
	while (x <= 3)
	{
		counter = 1;
		y = 0;
		max = arr[0][x];
		while (y <= 3)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				counter++;
			}
			y++;
		}
		if (counter != InputArray[0][x])
			return (0);
		x++;
	}
	return (1);
}

int	error2(int arr[4][4], int **InputArray)
{
	int	y;
	int	x;
	int	counter;
	int	max;

	x = 0;
	while (x <= 3)
	{
		counter = 1;
		y = 3;
		max = arr[3][x];
		while (y >= 0)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				counter++;
			}
			y--;
		}
		if (counter != InputArray[1][x])
			return (0);
		x++;
	}
	return (1);
}

int	error3(int arr[4][4], int **InputArray)
{
	int	y;
	int	x;
	int	counter;
	int	max;

	y = 0;
	while (y <= 3)
	{
		counter = 1;
		x = 0;
		max = arr[y][0];
		while (x <= 3)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				counter++;
			}
			x++;
		}
		if (counter != InputArray[2][y])
			return (0);
		y++;
	}
	return (1);
}

int	error4(int arr[4][4], int **InputArray)
{
	int	y;
	int	x;
	int	counter;
	int	max;

	y = 0;
	while (y <= 3)
	{
		counter = 1;
		x = 3;
		max = arr[y][3];
		while (x >= 0)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				counter++;
			}
			x--;
		}
		if (counter != InputArray[3][y])
			return (0);
		y++;
	}
	return (1);
}

int ErrorC(int arr[4][4], int **InputArray)
{
	if (error1(arr, InputArray) == 0 || error2(arr, InputArray) == 0
		|| error3(arr, InputArray) == 0 || error4(arr, InputArray) == 0)
		return (0);
	return (1);
}

int	dupe1(int arr[4][4])
{
	int	y;
	int	x;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (arr[y][0] + arr[y][1] + arr[y][2] + arr[y][3] != 10)
				return (0);
			if (arr[0][x] + arr[1][x] + arr[2][x] + arr[3][x] != 10)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

int	dupe2(int arr[4][4])
{
	int	y;
	int	x;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (arr[y][0] == arr[y][1] || arr[y][0] == arr[y][2]
				|| arr[y][0] == arr[y][3] || arr[y][1] == arr[y][2]
				|| arr[y][1] == arr[y][3] || arr[y][2] == arr[y][3])
				return (0);
			if (arr[0][x] == arr[1][x] || arr[0][x] == arr[2][x]
				|| arr[0][x] == arr[3][x] || arr[1][x] == arr[2][x]
				|| arr[1][x] == arr[3][x] || arr[2][x] == arr[3][x])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

void	print_array(int arr[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = arr[i][j] + '0';
			j++;
			write(1, &c, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	looppart2(int count3, int count4, int arr[4][4], int **uinput)
{
	while (count3 < 24)
			{
				count4 = 0;
				lineswapper(arr[2], count3);
				while (count4 < 24)
				{
					lineswapper(arr[3], count4);
					if (dupe1(arr) == 1 && dupe2(arr) == 1 && ErrorC(arr, uinput) == 1)
					{
						print_array(arr);
						return (1);
					}
					count4++;
				}
				count3++;
			}
	return (0);
}

int	looppart1(int count1, int count2, int arr[4][4], int **uinput)
{
	int count3 = 0;
	int count4 = 0;
	int check = 0;
	
	while (count1 < 24)
	{
		count2 = 0;
		lineswapper(arr[0], count1);
		while (count2 < 24)
		{
			count3 = 0;
			lineswapper(arr[1], count2);
			if (looppart2(count3, count4, arr, uinput) == 1)
				return (1);
			count2++;
		}
		count1++;
	}
	return (0);
}

void bruteforce(int **uinput)
{
	int count1 = 0;
	int count2 = 0;
	int	start[4][4];

	if (looppart1(count1, count2, start, uinput) == 0)
		print_error();
	looppart1(count1, count2, start, uinput);
}
