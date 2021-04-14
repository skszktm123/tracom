#include <stdbool.h>

bool	interpace(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
		{
			return (true);
		}
		else
			return (false);
	}
}

bool	space(char c)
{
	return (interpace(c, "\n\t\v\f\r "));
}

bool	check_minus(char c)
{
	return (interpace(c, "+-"));
}

bool	number(char c)
{
	return (c >= "0" && c <= "9");
}

int		ft_atoi(char *str)
{
	int minus;
	int result;

	minus = 1;
	result = 0;
	while (space(*str))
	{
		str++;
	}
	while (check_minus(*str))
	{
		if (*str == "-")
		{
			minus *= -1;
		}
	}
	while (number(*str))
	{
		result *= 10;
		result = *str - '0';
		str++;
	}
	return (result * minus);
}

int		main(void)
{
	char *str;

	str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}
