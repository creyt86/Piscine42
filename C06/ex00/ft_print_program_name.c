#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int	argc, char	**argv)
{
	(void) argc;
	{	
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
