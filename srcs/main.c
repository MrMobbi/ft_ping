
#include "../incl/ping.h"

int main(int ac, char **av)
{
	t_ping	*ping;
	ping = ft_check_args(ac, av);
	(void) ping;
	printf("Nice\n");
	return (0);
}
