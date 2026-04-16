
#include "../incl/ping.h"

t_ping	*ft_init_ping(int ac, char **av)
{
	t_ping	*ping = calloc(1, sizeof(t_ping));
	if (!ping)
		ft_error(MSG_ERR_MALLOC);
	ping->buffer = ft_get_args(ac, av);
	return (ping);;
}
