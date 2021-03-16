#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strcpy 함수가 선언된 헤더 파일

struct Person
{
	char name[20]; // 구조체 멤버1
	int age; // 구조체 멤버2
	char address[100]; // 구조체 멤버3
};

int main()
{
	struct Person p1; // 구조체 변수 선언

	// 점으로 구조체 멤버에 접근하여 값 할당.
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	// 점으로 구조체 멤버에 접근하여 값 출력
	printf("이름: %s\n", p1.name);		// 이름: 홍길동
	printf("나이: %d\n", p1.age); 		// 나이: 30
	printf("주소: %s\n\n", p1.address);	// 주소: 서울시 용산구 한남동

	struct Person p2 = { .name = "이호창", .age = 34, .address = "서울"};
	struct Person p3 = { "고길동", 40, "서울시 서초구 반포동"};

	printf("이름: %s\n\n", p2.name);
	printf("이름: %s\n\n", p3.name);

	return 0;
}
