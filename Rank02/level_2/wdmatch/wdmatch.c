#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int	j = 0;

	if(ac == 3)
	{
		while(av[2][j])
		{
			if(av[2][j] == av[1][i])
				i++;
			j++;
		}
		if(av[1][i] == '\0')
		{
			i = 0;
			while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}