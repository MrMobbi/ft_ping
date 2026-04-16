
#include "../incl/ping.h"

void	ft_free_ping(t_ping *ping)
{
	for (size_t i = 0; ping->buffer[i] != NULL; i++)
		free(ping->buffer[i]);
	free(ping->buffer);
	free(ping);
}
