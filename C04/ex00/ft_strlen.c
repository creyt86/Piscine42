#include <string.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	printf("%d\n", ft_strlen("Bonjour"));
	printf("%lu\n", strlen("Bonjour"));
}*/
