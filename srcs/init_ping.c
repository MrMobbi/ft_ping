
#include "../incl/ping.h"

static size_t	ft_len_option(int ac, char **av)
{
	size_t len = 0;
}

char	*ft_get_option(int ac, char **av)
{
	char	*str = calloc(ft_len_option(ac, av), sizeof(char));
	if (!str)
		ft_error(MSG_ERR_MALLOC);
	return (str);
}

t_ping	*ft_init_ping(int ac, char **av)
{
	t_ping	*ping = calloc(1, sizeof(t_ping));
	if (!ping)
		ft_error(MSG_ERR_MALLOC);
	ping->option = ft_get_option(ac, av);
	return (ping);
}
