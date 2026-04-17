
#include "../incl/ping.h"

void	ft_free_ping(t_ping *ping)
{
	free(ping->option);
	free(ping);
}
