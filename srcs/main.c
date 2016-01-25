#include "bash_script.h"

int		main(void)
{
	t_info	info;

	get_hostname(&info);
	printf("Host: %s\n", info.host);

	return (0);
}
