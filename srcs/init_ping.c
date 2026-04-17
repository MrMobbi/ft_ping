
#include "../incl/ping.h"

t_ping	*ft_init_ping(int ac, char **av)
{
	t_ping	*ping = malloc(sizeof(t_ping));
	if (!ping)
		ft_error(MSG_ERR_MALLOC);
	ping->destination = NULL;
	ping->option = NULL;
	for (int i = 1; i < ac; i++)
	{
		if (*av[i] == '-')
		{
			ft_get_option(ping, av, i);	
			i+= 2;
		}
	}
	return (ping);
}
