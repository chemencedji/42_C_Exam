
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	neg;

	nb = 0;
	i = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nb *= 10;
		nb += (int)str[i] - 48;
		i++;
	}
	return (nb * neg);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
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

void    ft_calc(int rez)
{
    int calc;
    int i;
    int f;
    int flag;
    
    i = 1;
    calc = 0;
    if(rez <= 0)
        write(1, "0\n", 2);
    else    
    {
        while(i <= rez)
        {
            f = 1;
            flag = 0;
            while(f <= i)
            {
                if(i % f == 0)
                    flag++;
                f++;
            }
            if(flag == 2)
                calc += i;
            i++;
        }
    ft_putnbr(calc);
    write(1, "\n", 1);
    }
}

int     main(int argc, char **argv)
{
    if(argc == 2)
        ft_calc(ft_atoi(argv[1]));
    else
        write(1, "0\n", 2);
    return(0);
}