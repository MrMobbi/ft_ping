
#include "../incl/ping.h"

t_ping	*ft_init_ping(int ac, char **av)
{
	t_ping	*ping = malloc(sizeof(t_ping));
	if (!ping)
		ft_error(MSG_ERR_MALLOC);
	for (int i = 1; i < ac; i++)
	{
		if (*av[i] == '-')
		{

		}
	}
	return (ping);
}
