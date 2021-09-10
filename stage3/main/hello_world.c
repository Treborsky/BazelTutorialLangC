#include "lib/hello_time.h"
#include "main/hello_greet.h"

#include <stdio.h> // it's not an error to omit this include, but this gives better visibility

int main()
{
	printf("Using two Bazel packages to link libraries\n");
	print_time();
	print_greet();
	return 0;
}

