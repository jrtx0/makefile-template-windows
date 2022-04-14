#include "fnet_prot.h"
#include "fnet_tcp.h"
#include "fnet_stdlib.h"

static fnet_prot_if_t * const fnet_prot_if_list[] = 
{
    &fnet_tcp_prot_if,
};

#define FNET_PROT_TRANSPORT_IF_LIST_SIZE (sizeof(fnet_prot_if_list)/sizeof(fnet_prot_if_t*))

fnet_prot_if_t* _fnet_prot_find(int protocol)
{
    int i;
    
    for (i = 0; i < FNET_PROT_TRANSPORT_IF_LIST_SIZE; i++)
    {
        if (fnet_prot_if_list[i]->protocol == protocol)
        {
            return fnet_prot_if_list[i];
        }
    }

    return FNET_NULL;
}