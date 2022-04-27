#ifndef CTDS_CORE_H
#define CTDS_CORE_H

#include <stdlib.h>
#include <stdint.h>

#include "tags.h"

#define CTDS__(A, B) A##B
#define CTDS_(A, B) CTDS__(A, B)

struct ctds_tag
{
    uint64_t tag;
};

#endif // !CTDS_CORE_H
