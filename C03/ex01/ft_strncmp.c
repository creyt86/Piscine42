#include <string.h>
#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);
}

/*int main()
{
	char	*s1 = "aonsoia";
	char 	*s2 = "bonsoir";
	
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", strncmp(s1, s2, 1));
}*/
