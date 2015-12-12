#ifndef _WINDOWS_CLOCKGETTIME_H
#define _WINDOWS_CLOCKGETTIME_H

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#include <WinSock2.h>

#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 1
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID 3

struct timespec {
    long tv_sec;
    long tv_nsec;
};

int clock_gettime(int X, struct timeval *tv);

#ifdef __cplusplus
}   /* ... extern "C" */
#endif  /* __cplusplus */

#endif
