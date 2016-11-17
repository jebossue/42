#include "libft.h"

int main()
{
	char *s = " olol";
	char **r = ft_strsplit(s, ' ');

	while (*r)
	{
		printf("%s\n", *r);
		r++;
	}
	exit(0);
}
