#include "../incl/ping.h"

void	ft_print_help(void)
{
    FILE *f = fopen(D_PATH_HELP_FILE, "r");
    char buffer[256];
    if (!f)
		ft_error(MSG_ERR_HELP_OPEN);

    while (fgets(buffer, sizeof(buffer), f))
        printf("%s", buffer);
    fclose(f);
	exit(2);
}
