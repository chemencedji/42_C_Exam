
#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int n);

void	ft_fprime(int n)
{
	int d;
	int p;

	d = 2;
	p = 0;
	if (n < 2)
		printf("%d", n);
	while (n > 1)
	{
		while (n % d == 0)
		{
			p++;
			n = n / d;
		}
		if (++p)
		{
			while (--p)
			{
				printf("%d", d);
				if (!(n == 1 && p == 1))
					printf("*");
			}
		}
		d++;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
		ft_fprime(atoi(argv[1]));
	return (0);
}