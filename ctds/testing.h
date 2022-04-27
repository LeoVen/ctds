#ifndef CTDS_TESTING_H
#define CTDS_TESTING_H

#include <stdbool.h>
#include <stdint.h>

// A test runner
struct ctds_test_runner;

// A test group
struct ctds_group;
struct ctds_test;
typedef int (*ctds_test_func)(struct ctds_test*);

struct ctds_test
{
    bool passed;
    const char *msg;

    void (*pass)(struct ctds_test*);
};

struct ctds_group
{
    uint64_t total;
    uint64_t passed;
    const char *test_name;

    struct ctds_test current;
    struct ctds_test *runned;

    ctds_test_func *tests;
};

struct ctds_test_runner
{
    struct ctds_group *groups;
};

struct ctds_group new_test_group()
{
    struct ctds_group group = { 0 };

    return group;
}

void pass(struct ctds_test *test)
{
    test->passed = true;
}

void fail(struct ctds_test *test, const char *msg)
{
    test->msg = msg;
}

#endif // !CTDS_TESTING_H
