
#include "../incl/ping.h"

static int	ft_check_option(char *str)
{
	if (str == NULL)
		ft_error(MSG_ERR_WRONG_OPTION);
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
	return (0);
}

t_option	*ft_lst_option_new(int index, char **av)
{
	t_option	*nw = malloc(sizeof(t_option));
	if (!nw)
		ft_error(MSG_ERR_MALLOC);
	nw->next = NULL;
	nw->kind = ft_check_option(av[index]);
	nw->value = atoi(av[index + 1]);
	printf("nw->value [%d]\n", nw->value);
	if (!nw->value)
		ft_error(MSG_ERR_MALLOC);
	return (nw);
}

void	ft_lst_option_add(t_option *option, int index, char **av)
{
	t_option	*nw = ft_lst_option_new(index, av);
	while (!option)
		option = option->next;
	option->next = nw;
}

void	ft_get_option(t_ping *ping, char **av, int index)
{
	if (ping->option == NULL)
		ping->option = ft_lst_option_new(index, av);
	else
		(void) ping; // TODO ft_lost_option_add
}
