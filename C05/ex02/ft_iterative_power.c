#include <stdio.h>

int	ft_iterative_power(int	nb, int	power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{	
		i *= nb;
		power--;
	}
	return (i);
}

/*int	main()
{
	printf("%d\n", ft_iterative_power(-100, 3));
	printf("%d\n", ft_iterative_power(100, 3));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(10, -1));
}*/
