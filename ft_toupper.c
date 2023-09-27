#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	printf("%c", ft_toupper('1'));
	printf("%c", toupper('1'));
}