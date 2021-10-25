#include "stats.h"
	struct Stats {
	float average;
	float min;
	float max;
	};
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int i=0;
    float sum=0.0;
    for (i=0;i<setlength;i++)
    {
        sum= sum+ numberset[i];
		if(numberset[i] > s.max)
		{
		s.max = numberset[i];
		}
		else
		{
		s.min = numberset[i];
		}
		
		
    }
    s.average = sum / setlength;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
