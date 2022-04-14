/**************************************************************************
*
*  Socket API.
*
***************************************************************************/
#ifndef _FNET_SOCKET_H_
#define _FNET_SOCKET_H_

#include "fnet_stdlib.h"
#include "fnet_socket_prv.h"

/**************************************************************************/ /*!
 * @brief Socket descriptor.
 ******************************************************************************/
typedef void *fnet_socket_t;

/************************************************************************
*     Function Prototypes
*************************************************************************/
extern fnet_socket_t fnet_socket_create(int protocol, fnet_socket_if_t *s);
extern void fnet_socket_release(int protocol, fnet_socket_if_t *s);

#endif /* _FNET_SOCKET_H_ */