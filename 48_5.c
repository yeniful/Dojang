#include <stdio.h>

struct Point2D{
	int x;
	int y;
};

int main()
{
    struct Point2D p1;

	p1.x = 10;
	p1.y = 20;

	printf("%d %d\n", p1.x, p1.y);

	return 0;
}

