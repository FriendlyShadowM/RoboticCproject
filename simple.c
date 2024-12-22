

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

int8_t get_input ()
{
	int8_t in;
	do {
	printf("Please enter 0 to stop the belt, 1 to start the belt, 2 to read status, 3 to enter load \n");
	scanf(" %hhd", &in);
	} while ((in < 0) && (in > 3) );
	return in;
}

void get_load (int8_t* l)
{
	int8_t in;
	do {
	printf("Please enter load \n");
	scanf(" %hhd", &in);
	} while (in < 0);
	(*l) = in;
	printf ("%d \n", in);
	return;
}

void timer (uint64_t ms)
{
	struct timespec ts;
    ts.tv_sec = ms / 1000;            // seconds
    ts.tv_nsec = (ms % 1000) * 1000000; // nanoseconds
    nanosleep(&ts, NULL);
    return;
}

/*
int main ()
{
	int32_t a[] = {7, 6, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -6, -7, -8};
	int32_t b = 16;
	
	sort (a, b);
	
	for (int i = 0; i < b; i++)
	{
		printf ("%d, ", a[i]);
	}
	return 0;
}
*/
