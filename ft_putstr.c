#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char const *s)
{
	while (*s)
	{
		ft_putchar(*s++);
	}
}
int main(void)
{
	ft_putstr("Hallo");
	return (0);
}
