
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nub(int nb)
{
	int m[10];
	int i;
	int sgn;

	sgn = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sgn = (-1);
	}
	if (nb == 0)
		ft_putchar('0');
	i = 0;
	while (nb != 0)
	{
		m[i] = sgn * (nb % 10);
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(m[i] + 48);
		i--;
	}
}

int     main(int argc, char **argv)
{
    int i;
    char *str;
    
    if(argc > 1)
    {    
        i = argc - 1;
        str = argv[1];
        ft_nub(i);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return(0);
}