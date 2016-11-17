#include <stdio.h>
#include "libft.h"

int main()
{
//	char	*str = "the cake is a lie!\0I'm hidden lol\r\n";
	char	buff1[] = "\t \n     \t \n   ";
//	char	buff2[28] = "there is no stars in the sky";
//	char	*s2 = buff1 + 5;
//	printf("%lu\n", strlen(s2));
//	printf("%lu\n", strlen("thx to ntoniolo for this test !"));
//	size_t max = strlen("there is no stars in the sky\0I'm hidden lol\r\n") + 4;
	printf("size1:%s\n", ft_strtrim(buff1));
//	printf("%s\n", s2);
//	printf("%s", s2);
	return (0);
}
