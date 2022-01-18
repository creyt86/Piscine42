#include <unistd.h>

void	ft_putchar(char	n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	char	nb;

	nb = '0';
	while (nb <= '9')
	{
		ft_putchar(nb);
		nb++;
	}
}
