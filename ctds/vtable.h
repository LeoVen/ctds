#ifndef VTABLE
#error "CTDS Error: VTABLE not defined"
#endif

#ifndef VT
#error "CTDS Error: VT not defined"
#endif

#include <stdbool.h>
#include <stdio.h>

struct VTABLE
{
    int (*cmp)(VT, VT);
    bool (*eq)(VT, VT);
    VT (*cpy)(VT);
    bool (*str)(FILE *, VT);
    void (*drop)(VT);
    size_t (*hash)(VT);
    int (*pri)(VT, VT);
};


#undef VT
