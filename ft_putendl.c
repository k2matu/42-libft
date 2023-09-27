#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putendl(char const *s)
{
	while (*s)
	{
		ft_putchar(*s++);
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_putendl("Hallo");
	return (0);
}
