#include <stdio.h>
#define PRINT_NUM(x) printf("%d\n", x); \
					 printf("%d\n", x + 1); \
					 printf("%d\n", x + 2);

int main()
{
	PRINT_NUM(10);

	return 0;
}
