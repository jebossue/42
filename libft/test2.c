#include "libft.h"

int	main(int ac, char **av)
{
	int i;
	char **array2;
	(void)ac;
	array2 = ft_strsplit(av[1], ' ');
	i = 0;
	while (array2[i])
	{
		printf("%s\n", array2[i]);
		i++;
	}
	return (0);
}
