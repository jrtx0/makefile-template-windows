#ifndef _FNET_PROT_H_
#define _FNET_PROT_H_

#include "fnet_socket_prv.h"

/************************************************************************
*    Protocol numbers.
*************************************************************************/
#define FNET_PROT_ICMP4 (1U)
#define FNET_PROT_IGMP  (2U)
#define FNET_PROT_UDP   (3U)
#define FNET_PROT_TCP   (4U)
#define FNET_PROT_ICMP6 (58U)

/************************************************************************
*    Transport Layer Protocol interface control structure.
*************************************************************************/
typedef struct fnet_prot_if 
{
    fnet_socket_if_t *head;
    int protocol;
} fnet_prot_if_t;

/************************************************************************
*     Function Prototypes.
*************************************************************************/
fnet_prot_if_t * _fnet_prot_find(int protocol);

#endif /* _FNET_PROT_H_ */