#include "../incl/ping.h"

void	db_print_ping_buffer(char **buffer)
{
	printf("\n###\n[PRINT ping->buffer]\n");
	for (size_t i = 0; buffer[i] != NULL; i++)
		printf("ping->buffer[%lu] : [%s]\n", i, buffer[i]);
	printf("###\n");
}
