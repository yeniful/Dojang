// 41.7 심사문제: 문자열 비교하기
// 30이하의 길이면 할당할 때 sizeof(char) * 31을 해주자.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char *s1 = malloc(sizeof(char) * 31);
	char *s2 = malloc(sizeof(char) * 31);

	scanf("%s %s", s1, s2);

	int result = strcmp(s1, s2);
	printf("%d\n", result);

	return 0;
}
