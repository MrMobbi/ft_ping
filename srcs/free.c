
#include "../incl/ping.h"

void	ft_free_ping(t_ping *ping)
{
	// TODO
	free(ping->option);
	free(ping);
}
