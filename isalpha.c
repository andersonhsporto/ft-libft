int	ft_isalpha(int c)
{
	if (!(('z' >= c && c >= 'a') || ('Z' >= c && c >= 'A')))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
