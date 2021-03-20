#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strcpy 함수가 선언된 헤더 파일

typedef struct { // 태그가 생략된 구조체 : 익명 구조체
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	// 점으로 구조체 멤버에 접근하여 값 출력
	printf("이름: 	%s\n", p1.name);
	printf("나이: 	%d\n", p1.age);
	printf("주소: 	%s\n", p1.address);
	
	return 0;
}
