#include "bash_script.h"

void	get_hostname(t_info *info)
{
	char hostname[255];

	if (gethostname(hostname, sizeof hostname) == -1)
	{
		perror("Hostname error\n");
		exit(2);
	}
	else
		info->host = strdup(hostname);
}

void	get_ip(t_info *info)
{
	int fd;
	struct ifreq ifr;

	fd = socket(AF_INET, SOCK_DGRAM, 0);

	ifr.ifr_addr.sa_family = AF_INET;

	snprintf(ifr.ifr_name, IFNAMSIZ, "eth0");

	ioctl(fd, SIOCGIFADDR, &ifr);

	/* and more importantly */
	printf("%s\n", inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr));

	(info->ip)++;

	close(fd);
}
