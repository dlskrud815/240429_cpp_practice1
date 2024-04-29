#include <iostream>

using namespace std;

int main()
{
	int row, col;
	

	cout << "** 2차원 배열 복습 - 행렬 합 **" << endl
		<< "행과 열의 수를 입력하세요: ";
	cin >> row >> col;

	cout << endl << "행렬 원소를 입력하세요: " << endl;

	//2차원 동적 배열 선언
	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}

	//배열 입력
	for (int i = 0; i < row; i++)
	{
		cout << i+1 << "행: ";

		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}

	//각 행의 합 출력
	cout << endl << "각 행의 합: " << endl;
	for (int i = 0; i < row; i++)
	{
		int rowSum = 0;
		cout << "행 " << i+1 << ": ";

		for (int j = 0; j < col; j++)
		{
			rowSum += arr[i][j];
		}
		cout << rowSum << endl;
	}

	//각 열의 합 출력
	cout << endl << "각 열의 합: " << endl;
	for (int i = 0; i < col; i++)
	{
		int colSum = 0;
		cout << "열 " << i+1 << ": ";

		for (int j = 0; j < row; j++)
		{
			colSum += arr[j][i];
		}
		cout << colSum << endl;

	}

	//arr 메모리 해제
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}