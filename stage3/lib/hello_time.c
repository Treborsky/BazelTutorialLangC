#include "lib/hello_time.h"

#include <stdint.h>
#include <time.h>
#include <stdio.h>

void print_time()
{
	time_t result = time(NULL);
	if(result != (time_t)(-1))
	{
		printf("The current time is %s(%jd seconds since the Epoch)\n", asctime(gmtime(&result)), (intmax_t)(result));
	}
	else
	{
		printf("An error occured when getting time.");
	}
}

