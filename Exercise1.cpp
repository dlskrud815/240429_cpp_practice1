#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

#define Hundred_Million 100000000

void performaceCheck(vector<int> test_vec);

int main()
{
	cout << "** vector ���� üũ **" << endl;

	//1. �̸��� test_vec1�̰� ũ�Ⱑ 1�� ������ ���� ����
	vector<int> test_vec1(1);

	//2. test_vec1�� push_back()�� 1��ȸ �����Ͽ� 1���� 1����� ���� �߰��ϰ�,
	//�ҿ� �ð��� ms ������ ���� �� ���
	performaceCheck(test_vec1);

	//3. �̸��� test_vec2�̰� ũ�Ⱑ 1�� ������ ���� ����
	vector<int> test_vec2(1);

	//4. reserve()�� 1�ﰳ ��ŭ�� ������ ����
	test_vec2.reserve(Hundred_Million);

	//5. test_vec2�� push_back()�� 1��ȸ �����Ͽ� 1���� 1����� ���� �߰��ϰ�,
	//�ҿ� �ð��� ms ������ ���� �� ���

	//���� �ð�
	performaceCheck(test_vec2);

	return 0;
}

void performaceCheck(vector<int> test_vec)
{
	clock_t start, end;
	double result;

	//���� �ð�
	start = clock();

	//�����ų �ڵ�
	for (int i = 0; i < Hundred_Million; i++)
	{
		test_vec.push_back(i + 1);
	}
	//

	end = clock();
	result = (double)(end - start);

	cout << "���� �ð�: " << result << "ms\n";
	//cout << "���� �ð�: " << ((result) / CLOCKS_PER_SEC) << "sec\n";
}