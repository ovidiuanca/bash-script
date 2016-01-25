#include "bash_script.h"

int		main(void)
{
	t_info	info;

	get_hostname(&info);
	printf("Host:\t%s\n", info.host);
	
	get_ip(&info);
	printf("Ip: %s\n", info.ip);
	return (0);
}
