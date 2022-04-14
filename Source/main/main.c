#include "stdio.h"
#include "fnet_socket.h"
#include "fnet_prot.h"

int main(void)
{
    fnet_socket_if_t doipsocket = {
        .data = 1,
    };

    fnet_socket_create(FNET_PROT_TCP, &doipsocket);

    fnet_socket_release(FNET_PROT_TCP, &doipsocket);

    return 0;
}