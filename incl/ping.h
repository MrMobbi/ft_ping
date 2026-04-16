
#ifndef PING_H
# define PING_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define MSG_ERR_ONE_ARG "ping: usage error: Destination address required"

void	ft_check_args(int ac, char **av);

void	ft_error(char *str);

#endif
