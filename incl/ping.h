
#ifndef PING_H
# define PING_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define MSG_ERR_ONE_ARG "ping: usage error: Destination address required"
# define MSG_ERR_MALLOC "Error: Malloc could not fing memory"

typedef struct s_ping {
	size_t	nb_option;
	char	**option;
	char	**buffer;
} t_ping;

t_ping	*ft_check_args(int ac, char **av);

void	ft_error(char *str);

#endif
