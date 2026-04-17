
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

t_option	*ft_lst_option_new(int index, char **av)
{
	t_option	*nw = malloc(sizeof(t_option));
	if (!nw)
		ft_error(MSG_ERR_MALLOC);
	nw->next = NULL;
	ft_check_option(av[index]);
	nw->c = av[index][1];
	nw->value = atoi(av[index + 1]);
	printf("nw->value [%d]\n", nw->value);
	if (!nw->value)
		ft_error(MSG_ERR_MALLOC);
	return (nw);
}

void	ft_get_option(t_ping *ping, char **av, int index)
{
	if (ping->option == NULL)
		ping->option = ft_lst_option_new(index, av);
	else
		(void) ping; // TODO ft_lost_option_add
}
