
#include "../incl/ping.h"

void	ft_check_args(int ac, char **av)
{
	(void) av;
	if (ac < 2)
		ft_error(MSG_ERR_ONE_ARG);
}
