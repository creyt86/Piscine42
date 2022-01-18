#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char	c, char	d, char	e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{	
				ft_putchar(nb1, nb2, nb3);
				if (nb1 < '7')
					write(1, ", ", 2);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
	write(1, "\n", 1);
}
