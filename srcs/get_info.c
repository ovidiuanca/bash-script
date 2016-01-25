#include "bash_script.h"

void	get_hostname(t_info *info)
{
	char hostname[255];

	//sethostname("Ovidiu's Macbook-Pro", 21);
	if (gethostname(hostname, sizeof hostname) == -1)
	{
		perror("Hostname error\n");
		exit(2);
	}
	else
		info->host = strdup(hostname);
}
