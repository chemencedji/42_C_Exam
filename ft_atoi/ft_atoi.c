
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
