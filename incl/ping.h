
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
	char	*option;
} t_ping;

// ### CHECK_ARGS_C
void	ft_get_args(int ac, char **av);

// ### DEBUG_C
void	db_pint_option(char *str);

// ### ERROR_C
void	ft_error(char *str);

// ### FREE_C
void	ft_free_ping(t_ping *ping);

// ### INIT_PING_C
t_ping	*ft_init_ping(int ac, char **av);
#endif
