
#include "../incl/ping.h"

int main(int ac, char **av)
{
	t_ping	*ping;
	ping = ft_init_ping(ac, av);
	ft_free_ping(ping);
	return (0);
}
