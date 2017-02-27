#pragma once

#if __has_include(<agg_basics.h>)
#   define ANTIGRAIN_PRESENT 1
#else
#   warning Anti-Grain not found
#   define ANTIGRAIN_PRESENT 0
#endif
