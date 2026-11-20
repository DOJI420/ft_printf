#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

int	main()
{
	char *s = memset(malloc(1100000000), 'a', 1099999999);

	fprintf(stderr, "ft: %d\n", ft_printf("%s%s",s , s));
	fprintf(stderr, "og: %d\n", printf("%s%s",s , s));
	free(s);
	return 0;
}
