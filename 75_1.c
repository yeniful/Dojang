#include <stdio.h>

#define ARRAY_SIZE 10 // 10 ARRAY_SIZE로 정의
#define INDEX_INIT -1
#define COUNT 10

int main()
{
	char s1[ARRAY_SIZE];
	int i;

	i = INDEX_INIT;
	while (++i < ARRAY_SIZE)
	{
		s1[i] = 97 + i;
	}

	i = INDEX_INIT;
	while (++i < ARRAY_SIZE)
	{
		printf("%c ", s1[i]);
	}
	printf("\n");
// undef test

	printf("%d\n", COUNT);

#undef COUNT
#define COUNT 20

	printf("%d\n", COUNT);

	return 0;
}
