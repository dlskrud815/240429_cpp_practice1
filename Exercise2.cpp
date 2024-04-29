#include <iostream>
#include <vector>
#include <algorithm> //sort�� unique ���
using namespace std;

void printVector(vector<int> vector);
void uniqueVector(vector<int> vector);

int main()
{
	//�ߺ����� unique : iterator Ȱ��
	cout << "** vector �ߺ� ���� **" << endl << endl;

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };
	
	cout << "myVector: ";
	printVector(myVector);

	uniqueVector(myVector);

	return 0;
}

void printVector(vector<int> vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " ";
	}
	cout << endl << endl;
}

void uniqueVector(vector<int> vector)
{
	sort(vector.begin(), vector.end());

	cout << "myVector sorted: ";
	printVector(vector);

	vector.erase(unique(vector.begin(), vector.end()), vector.end());

	cout << "myVector unique: ";
	printVector(vector);
}