#include <iostream>

using namespace std;

int main()
{
	int row, col;

	cout << "** 2���� �迭 ���� - ��� �� **" << endl
		<< "��� ���� ���� �Է��ϼ���: ";
	cin >> row >> col;

	cout << endl << "��� ���Ҹ� �Է��ϼ���: " << endl;

	//2���� ���� �迭 ����
	int** matrix = new int* [row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
	}

	//�迭 �Է�
	for (int i = 0; i < row; i++)
	{
		cout << i+1 << "��: ";

		for (int j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//�� ���� �� ���
	cout << endl << "�� ���� ��: " << endl;
	for (int i = 0; i < row; i++)
	{
		int rowSum = 0;
		cout << "�� " << i+1 << ": ";

		for (int j = 0; j < col; j++)
		{
			rowSum += matrix[i][j];
		}
		cout << rowSum << endl;
	}

	//�� ���� �� ���
	cout << endl << "�� ���� ��: " << endl;
	for (int i = 0; i < col; i++)
	{
		int colSum = 0;
		cout << "�� " << i+1 << ": ";

		for (int j = 0; j < row; j++)
		{
			colSum += matrix[j][i];
		}
		cout << colSum << endl;

	}

	//matrix �޸� ����
	for (int i = 0; i < row; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}