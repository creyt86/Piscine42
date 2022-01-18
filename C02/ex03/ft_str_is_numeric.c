#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

/*int	main()
{
	char str[] = "";

	printf("%d\n", ft_str_is_numeric(str));
}*/
