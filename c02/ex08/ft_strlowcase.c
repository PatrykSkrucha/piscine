#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			{
				*str += 32;
			}
		str++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "aAb";
	for(int i=0; i<(sizeof(str)-1);i++)
		printf("%c", str[i]);
	printf("\n");
	ft_strlowcase(str);
	for(int i=0; i<(sizeof(str)-1);i++)
		printf("%c", str[i]);	
	return (0);
}