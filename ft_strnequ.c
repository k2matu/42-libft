#include <stdio.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	printf("%d", ft_strnequ("He", "Hello", 10));
}