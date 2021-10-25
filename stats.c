#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int i,sum=0;
    for (i=0;i<setlength;i++)
    {
        sum= sum+ numberset[i];
    }
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
