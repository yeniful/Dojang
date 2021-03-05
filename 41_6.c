// 41.6 심사문제: 문자열 길이 구하기
// 30이하의 길이면 할당할 때 sizeof(char) * 31을 해주자.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char *s = malloc(sizeof(char) * 30);

	scanf("%s", s);

	int result = strlen(s);
	printf("%d\n", result);

	return 0;
}
