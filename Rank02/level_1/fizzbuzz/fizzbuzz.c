#include <unistd.h>

// void	charput(char c)
// {
// 	write(1, &c, 1);
// }

// void	digit(int n)
// {
// 	if (n < 10)
// 		charput(n + 48);
// 	else
// 	{
// 		digit(n / 10);
// 		digit(n % 10);
// 	}
// }

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(void)
{
	int	num;

	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(num);
		write(1, "\n", 1);
		num++;
	}
}
