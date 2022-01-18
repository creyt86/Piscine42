#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main ()
	{
	char src[6] = "Hello";
	char dest[6] = "Salut";
	char *a;

	a = ft_strcpy(dest, src);
	printf("%s\n", a); 
	}
*/
