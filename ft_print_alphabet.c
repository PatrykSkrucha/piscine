#include<unistd.h>

void	ft_print_alphabet()
{
	char	ch;
	int	i;
	ch = 'a'; 
	i = 0;
	   while(i < 26)
	   {
		write(1, &ch, 1);
		ch = ch + 1;
		i++;
	   }
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
