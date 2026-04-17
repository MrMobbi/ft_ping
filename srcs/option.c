
#include "../incl/ping.h"

static void	ft_check_option(char *str)
{
	if (strcmp(str, "--help") && strcmp(str, "-h") == 0)
		ft_print_help();
	if (strlen(str) < 2)
		ft_error_unknow_option(' ');
	str++;
	if (strchr(D_ALL_OPTION, *str) == NULL)
		ft_error_unknow_option(*str);
	str++;
	if (*str != '\0')
		ft_error_unknow_option(*str);
}

t_option	*ft_lst_option_new(int ac, char **av)
{
	t_option	*nw = malloc(sizeof(t_option));
	if (!nw)
		ft_error(MSG_ERR_MALLOC);
	for (int i = 1; i < ac; i++)
	{
		if (*av[i] == '-')
			ft_check_option(av[i]);
	}
	return (nw);
}
