#include <stdio.h>

int	ft_sqrt(int	nb)
{
	long int	i;

	i = 1;
	if (nb > 0)
	{	
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

/*int main()
{
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(-144));
	printf("%d\n", ft_sqrt(0));
}*/
