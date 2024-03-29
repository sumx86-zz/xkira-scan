#ifndef __KIRA_SCAN_INIT_H
#define __KIRA_SCAN_INIT_H 1

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <getopt.h>
#include <sys/types.h>
#include <netdb.h>
#include <errno.h>
#include <libnet.h>
#include "output/output.h"
#include "inline.h"
#include "xkira-scan-config.h"
#include "net.h"

// libnet context
// init.h
libnet_t *ltag;

short  __xscan_init__( struct args *args, struct xp_stats *stats );
short  __init_stats__( struct xp_stats *stats );
short  __xscan_init_ports__( struct xp_stats *stats );
short  __xscan_init_hosts__( struct xp_stats *stats );
short  __xscan_init_buffs__( struct xp_stats *stats );
short  xscan_hostinfo( char *host, struct xp_setup *setup );
short  xscan_set_ports( const char *p, struct ports *ports );
short  xscan_validate_ports( struct ports *ports );

#ifdef __cplusplus
}
#endif

#endif