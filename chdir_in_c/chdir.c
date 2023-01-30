#include <unistd.h>
#include <stdio.h>

int main()
{
	if(chdir("/usr") != 0)
		perror("chdir() to /usr failed");
	if (chdir("/tmp") != 0)
    	perror("chdir() to /temp failed");
	if (chdir("/error") != 0)
    	perror("chdir() to /error failed");

  return 0;
}


