#include "core.h"

#ifndef T
#error "CTDS Error: T not defined"
#endif

#ifndef PFX
#error "CTDS Error: PFX not defined"
#endif

#ifndef SNAME
#error "CTDS Error: SNAME not defined"
#endif

#ifndef VTABLE
#error "CTDS Error: VTABLE not defined"
#endif

#define VT T
#include "vtable.h"

struct SNAME
{
    struct ctds_tag tag;

    T *buffer;

    size_t count;

    struct VTABLE *vtable;
};

struct SNAME CTDS_(PFX, _new)(struct VTABLE *vtable)
{
    struct SNAME result = { 0 };

    result.tag = (struct ctds_tag){ tag: CTDS_TAG_VECTOR };
    result.vtable = vtable;

    return result;
}

#undef T
#undef PFX
#undef SNAME
