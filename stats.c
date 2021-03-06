#include "stats.h"
#include <math.h>
struct Stats compute_statistics(const float* numberset, int setlength) {
   struct Stats s;

	if (setlength==0)
	{
		s.average=NAN;
		s.max= NAN;
		s.min=NAN;
	}
    else
	{
	s.average = 0;
	s.min = numberset[0];
    	s.max = numberset[0];
    	int i=0;
    	float sum=0.0;
    	for (i=0;i<setlength;i++)
    	{
       	 	sum= sum+ numberset[i];
		if(numberset[i] > s.max)
		{
		s.max = numberset[i];
		}
		if(numberset[i] < s.min)
		{
		s.min = numberset[i];
		}
		
		
    	}
   	 s.average = sum / setlength;
	}
	return s;
}
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
	if (computedStats.max > maxThreshold)
	{
		alerters[0]();
		alerters[1]();
	}
}
