#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (i <= ft_strlen(src))
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char	src[]= "Hello";
	char	dest[] = "Telephone";
	char n;

	ft_strncpy(dest, src, 3);
	printf("%s\n", dest);
}*/
