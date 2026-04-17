
#ifndef PING_H
# define PING_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

// ### MESSAGE
# define MSG_ERR_ONE_ARG "ping: usage error: Destination address required"
# define MSG_ERR_MALLOC "Error: Malloc could not find memory"
# define MSG_ERR_HELP_OPEN "Error: could not open help file"

// ### VARIABLE
# define D_ALL_OPTION "cistv"
# define D_PATH_HELP_FILE "docs/help.txt"

// ### MACRO

typedef struct s_option {
	char			c;
	int				value;
	struct s_option	*next;
} t_option;

typedef struct s_ping {
	char			*destination;
	struct s_option	*option;
} t_ping;

// ### CHECK_ARGS_C
void	ft_get_args(int ac, char **av);

// ### DEBUG_C
void	db_pint_option(char *str);

// ### ERROR_C
void	ft_error_unknow_option(char c);
void	ft_error(char *str);

// ### FREE_C
void	ft_free_ping(t_ping *ping);

// ### INIT_PING_C
t_ping	*ft_init_ping(int ac, char **av);

// ### OPTION_C
void		ft_get_option(t_ping *ping, char **av, int index);
t_option	*ft_lst_option_new(int index, char **av);

// ### PRINT_C
void ft_print_help(void);

#endif
