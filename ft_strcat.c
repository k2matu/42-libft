#include <string.h>
#include <stdio.h>

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char s1[50] = "Hello";
	char s2[4] = "you";
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s", strcat(s1, s2));
}