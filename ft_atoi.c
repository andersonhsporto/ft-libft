static int	ft_isspaces(int c)
{
	if ((c >= 9 && c <= 13)
		|| c == '+' || c == '-'
		|| c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;
	int	i;

	number = 0;
	sign = 1;
	i = 0;
	while (ft_isspaces(str[i]))
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (sign * number);
}
