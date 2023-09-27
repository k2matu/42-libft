#include <unistd.h>

void ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i++], 1);
	}
}