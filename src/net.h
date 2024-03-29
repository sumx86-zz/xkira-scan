#ifndef __KIRA_NET_H
#define __KIRA_NET_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netdb.h>
#include <errno.h>
#include "inline.h"
#include "xkira-scan-config.h"

#ifdef __cplusplus
extern "C" {
#endif

void  sockopt_hdrincl( int *sock, int *hdrincl );

short net_ip( char *iface, char *dst );
short IF_FLAGS( char *iface );

char * portservice( uint16_t port );
char * is_ip( const char *str );
char * rand_addr( void );

uint32_t net_off( char *ip, short subnet );
uint32_t calc_nhosts( short subnet );

struct ifreq * IF_LIST( int *num );
struct sockaddr_in net_sockaddr( uint16_t family, uint16_t port, char *addr );

#ifdef __cplusplus
}
#endif

#endif