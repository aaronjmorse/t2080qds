#include <stdio.h>
#include <vxWorks.h>

int loop;

int main()
{
	loop=1;

	while (loop < 10)
	{
		printf("\n\nHello world\n\n");
		taskDelay(10);
		loop++;
	}
	return 0;
}