#ifndef __BASH_SCRIPT_H
# define __BASH_SCRIPT_H

# include <stdio.h>
# include <stdlib.h>
# include <libc.h>
# include <unistd.h>
# include <sys/socket.h>
# include <sys/types.h>
# include <sys/ioctl.h>
# include <netinet/in.h>
# include <net/if.h>
# include <arpa/inet.h>

typedef struct	s_memory
{
	long 		total;
	long		free;
	long		used;
	long		swap;
}				t_memory;

typedef struct	s_info
{
	char		*host;
	char		*ip;
	char		*sv_name;
	char		*sv_alias;
	t_memory	mem;
	long		disk_space;
	char		*os_version;
	char		**ports;
}				t_info;

void	get_hostname(t_info *info);
void	get_ip(t_info *info);

#endif
