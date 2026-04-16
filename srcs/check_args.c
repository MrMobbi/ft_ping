
#include "../incl/ping.h"

char	**ft_get_args(int ac, char **av)
{
	char	**buffer = calloc(ac, sizeof(char*));
	if(!buffer)
		ft_error(MSG_ERR_MALLOC);
	if (ac < 2)
		ft_error(MSG_ERR_ONE_ARG);
	for(int i = 1; i < ac; i++)
	{
		buffer[i - 1] = strdup(av[i]);
		if (!buffer[i - 1])
			ft_error(MSG_ERR_MALLOC);
	}
	return (buffer);
}
