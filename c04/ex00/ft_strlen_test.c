#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (*str)
	{
		str++;
		index++;
	}
	return index;
}

int main(void)
{
	char *str;

	str = "H e l l o ";
	printf("c : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));
}
