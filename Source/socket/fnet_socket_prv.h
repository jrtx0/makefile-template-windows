/**************************************************************************
*
*  Private. Socket API.
*
***************************************************************************/
#ifndef _FNET_SOCKET_PRV_H_
#define _FNET_SOCKET_PRV_H_

#include "fnet_stack_config.h"
#include "fnet_socket.h"

/************************************************************************
*  Definitions.
*************************************************************************/
#define FNET_SOCKET_DESC_RESERVED (-1) /* The descriptor is reserved. */


/************************************************************************
*     Function Prototypes
*************************************************************************/
extern void _fnet_socket_list_add(fnet_socket_if_t **head, fnet_socket_if_t *s);
extern void _fnet_socket_list_del(fnet_socket_if_t **head, fnet_socket_if_t *s);


#endif /* _FNET_SOCKET_PRV_H_ */
