#ifndef CTDS_TESTS_VECTOR_H
#define CTDS_TESTS_VECTOR_H

#define T char *
#define PFX vec
#define SNAME vector
#define VTABLE vt_vec

#include <ctds/vector.h>
#include <ctds/testing.h>

int test_new(struct ctds_test *t)
{
    t->pass(t);
}

#endif // !CTDS_TESTS_VECTOR_H
