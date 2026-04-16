
#include "../incl/ping.h"

int main(int ac, char **av)
{
	t_ping	*ping;
	ping = ft_init_ping(ac, av);
	db_print_ping_buffer(ping->buffer);
	ft_free_ping(ping);
	return (0);
}
