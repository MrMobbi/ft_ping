
#include "../incl/ping.h"

void	ft_error_unknow_option(char c)
{
	printf("ping invalide option '%c'\n\n", c);
	ft_print_help();
	exit(1);
}

void	ft_error(char *str)
{
	printf("%s\n", str);
	exit(1);
}
