#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	// 1���� 52���� ������ �����ϰ� 4���� �ߺ����� �ʰ� �̱�

	int arr[52] = { 0, };
	int num = 0;
	int cnt = 0;

	srand(time(0));

	while (cnt < 4)
	{
		num = rand() % 52 + 1;

		if (arr[num] == 0)
		{
			arr[num] = 1;
			cnt++;
		}
	}

	for (int i = 1; i <= 52; i++)
	{
		if (arr[i] == 1)
		{
			cout << i << " ";
		}
	}

	return 0;
}