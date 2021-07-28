void	ft_bzero(void *s, size_t n)
{	
	size_t	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
