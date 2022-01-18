#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char *s1 = "bonjous";
	char *s2 = "bonjour";
	char a;

	a = ft_strcmp(s1, s2);
	printf("%d\n", a);
}*/
