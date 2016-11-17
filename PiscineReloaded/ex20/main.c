#include <stdio.h>
char	*ft_strdup(char *src);

int	main()
{
	char	src[5] = "blop";
	printf("%s", ft_strdup(src));
}
