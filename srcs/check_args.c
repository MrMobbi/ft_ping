
#include "../incl/ping.h"

t_ping	*ft_check_args(int ac, char **av)
{
	t_ping	*ping = calloc(1, sizeof(t_ping));
	if (!ping)
		ft_error(MSG_ERR_MALLOC);
	if (ac < 2)
		ft_error(MSG_ERR_ONE_ARG);
	ping->buffer = calloc(ac, sizeof(char *));
	if (!ping->buffer)
		ft_error(MSG_ERR_MALLOC);
	for(int i = 1; i < ac; i++)
	{
		ping->buffer[i - 1] = strdup(av[i]);
		if (!ping->buffer[i - 1])
			ft_error(MSG_ERR_MALLOC);
	}
	return (ping);
}
