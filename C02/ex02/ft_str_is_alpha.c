#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		else
			i++;
	}
	return (1);
}

/*int main()
{
	char	str[] = "";
	printf("%d\n", ft_str_is_alpha(str));
}*/
