#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return 0;
}
