#include <stdio.h>

int		ft_factorial(int factorial, int index)
{
	factorial *= index--;
	while (index > 0)
	{
		return(ft_factorial(factorial, index));
	}
	return (factorial);
}

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (ft_factorial(1, nb));
}

int	main(void)
{
	int n;

	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_recursive_factorial(n));
		n++;
	}
}
