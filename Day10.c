#include <stdio.h>

// ---- �ݺ��� ----
// ���ǽ��� ���ϸ鼭 ���� ��� ���� ������ �����Ű�� ��ȭ�� ���ǽ��� �� �ٽ� ���ϴ� ����
// for(), while(), do ~ while() 3������ ����
// 
// for���� �⺻ ����:
//		for (�ʱ��; ���ǽ�; ��ȭ��)
//		{
//			���� ����;
//		}
// 
//  �ʱ�� -> ���ǽ� -> ���ӹ��� -> ��ȭ�� -> ���ǽ� -> ���ӹ��� -> ��ȭ�� -> ... ������ ����
// for������ ���� ������ ����ϰ� ���� ���� �ʱ��, ���ǽ�, ��ȭ�� ����
//				ex) for(;;)
// for������ ���� ������ �� �� �϶��� {}(�߰�ȣ)�� ������ �� �ִ�.

// ---- ��Ÿ Ű���� ----
// break: �ش� Ű���带 ������ �Ǹ� �ݺ����� Ż��
// continue: �ش� Ű���带 ������ �Ǹ� continue���� �Ʒ� �ִ� ���� ������ �������� �ʰ� �����Ѵ�.

int main()
{
	// �ݺ��� x
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

	// �ݺ��� ���
	/*for (int i = 0; i < 10; i++)
	{
		printf("Hello world!\n");
	}

	printf("i�� ��: %d\n", i);*/

	/*for (;;)
		printf("Hello world!\n");*/
	
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;

		printf("Hello world! i: %d\n", i);
	}*/

	/*printf("���: ");
	for (int i = 'A'; i <= 'Z'; i++)
	{
		printf("%c", i);
	}*/

	/*char ch;

	printf("�Է�: ");
	scanf("%c", &ch);

	printf("���: ");
	for (char i = 'a'; i <= ch; i++)
	{

	}*/

	/*int num;

	for (;;)
	{
		printf("�Է�: ");
		scanf("%d", &num);

		if (num == 9)
		{
			printf("9�� �ԷµǾ� ���α׷��� �����մϴ�");
			break;
		}

		printf("���: %d\n\n", num);
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