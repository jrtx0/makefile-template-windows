/**************************************************************************
*
*  Socket API.
*
***************************************************************************/
#ifndef _FNET_SOCKET_H_
#define _FNET_SOCKET_H_

#include "fnet_stdlib.h"

/**************************************************************************/ /*!
 * @brief Socket descriptor.
 ******************************************************************************/
typedef void *fnet_socket_t;

/************************************************************************
*    Structure per socket.
*************************************************************************/
typedef struct _fnet_socket_if_t
{
    struct _fnet_socket_if_t *next;
    struct _fnet_socket_if_t *prev;
    fnet_socket_t descriptor;
    int data;
} fnet_socket_if_t;

/************************************************************************
*     Function Prototypes
*************************************************************************/
extern fnet_socket_t fnet_socket_create(int protocol, fnet_socket_if_t *s);
extern void fnet_socket_release(int protocol, fnet_socket_if_t *s);

#endif /* _FNET_SOCKET_H_ */