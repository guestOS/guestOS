#ifndef WINDOWS
#include_next <sched.h>
#else

struct sched_param {
    int sched_priority;
};

int sched_yield(void);
int sched_get_priority_min(int policy);
int sched_get_priority_max(int policy);

#endif
