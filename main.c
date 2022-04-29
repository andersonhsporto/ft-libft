#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	void	*teste = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("%p\n", teste);
	return (0);
}