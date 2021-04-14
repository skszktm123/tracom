#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *sub;
	char *fsub;

	if (*to_find == '\0')
	{
		return (str);
	}
	sub = str;
	fsub = to_find;
	while (true)
	{
		if (*fsub == '\0')
			return ((char *)(sub - (fsub - to_find)));
		if (*sub == *fsub)
			fsub++;
		else
			fsub = to_find;
		if (*sub == '\0')
			break ;
		sub++;
	}
	return (0);
}

int		main(void)
{
	char *sub;
	char *fsub;
	char *result_c;
	char *result_ft;

	sub = "Foo Bar Baz";
	fsub = "Bar";
	result_c = strstr(sub, fsub);
	result_ft = ft_strstr(sub, fsub);
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}
