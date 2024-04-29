#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

#define Hundred_Million 100000000

void performaceCheck(vector<int> test_vec);

int main()
{
	cout << "** vector 성능 체크 **" << endl;

	//1. 이름이 test_vec1이고 크기가 1인 정수형 벡터 생성
	vector<int> test_vec1(1);

	//2. test_vec1에 push_back()을 1억회 수행하여 1부터 1억까지 값을 추가하고,
	//소요 시간을 ms 단위로 측정 후 출력
	performaceCheck(test_vec1);

	//3. 이름이 test_vec2이고 크기가 1인 정수형 벡터 생성
	vector<int> test_vec2(1);

	//4. reserve()로 1억개 만큼의 공간을 예약
	test_vec2.reserve(Hundred_Million);

	//5. test_vec2에 push_back()을 1억회 수행하여 1부터 1억까지 값을 추가하고,
	//소요 시간을 ms 단위로 측정 후 출력

	//현재 시간
	performaceCheck(test_vec2);

	return 0;
}

void performaceCheck(vector<int> test_vec)
{
	clock_t start, end;
	double result;

	//현재 시간
	start = clock();

	//수행시킬 코드
	for (int i = 0; i < Hundred_Million; i++)
	{
		test_vec.push_back(i + 1);
	}
	//

	end = clock();
	result = (double)(end - start);

	cout << "수행 시간: " << result << "ms\n";
	//cout << "수행 시간: " << ((result) / CLOCKS_PER_SEC) << "sec\n";
}