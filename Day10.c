#include <stdio.h>

// ---- 반복문 ----
// 조건식을 비교하면서 참일 경우 종속 문장을 실행시키고 변화식 조건식을 또 다시 비교하는 문법
// for(), while(), do ~ while() 3가지가 존재
// 
// for문의 기본 원형:
//		for (초기식; 조건식; 변화식)
//		{
//			종속 문장;
//		}
// 
//  초기식 -> 조건식 -> 종속문장 -> 변화식 -> 조건식 -> 종속문장 -> 변화식 -> ... 순으로 진행
// for문에서 무한 루프를 사용하고 싶을 때는 초기식, 조건식, 변화식 생략
//				ex) for(;;)
// for문에서 종속 문장이 한 줄 일때는 {}(중괄호)를 생략할 수 있다.

// ---- 기타 키워드 ----
// break: 해당 키워드를 만나게 되면 반복문을 탈출
// continue: 해당 키워드를 만나게 되면 continue보다 아래 있는 종속 문장은 실행하지 않고 진행한다.

int main()
{
	// 반복문 x
	/*printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");
	printf("Hello world!\n");*/

	// 반복문 사용
	/*for (int i = 0; i < 10; i++)
	{
		printf("Hello world!\n");
	}

	printf("i의 값: %d\n", i);*/

	/*for (;;)
		printf("Hello world!\n");*/
	
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;

		printf("Hello world! i: %d\n", i);
	}*/

	/*printf("출력: ");
	for (int i = 'A'; i <= 'Z'; i++)
	{
		printf("%c", i);
	}*/

	/*char ch;

	printf("입력: ");
	scanf("%c", &ch);

	printf("출력: ");
	for (char i = 'a'; i <= ch; i++)
	{

	}*/

	/*int num;

	for (;;)
	{
		printf("입력: ");
		scanf("%d", &num);

		if (num == 9)
		{
			printf("9가 입력되어 프로그램을 종료합니다");
			break;
		}

		printf("출력: %d\n\n", num);
	}*/

	/*for (int i = 0; i < 5; i++)
	{ 
		for (int j = 0; j < 5; j++)
		{
			printf("i: %d, j: %d ", i, j);
		}
		printf("\n");
	}*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}

		for (int j = 0; j < 2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}