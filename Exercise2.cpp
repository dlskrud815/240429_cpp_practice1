#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	//�ߺ����� unique : iterator Ȱ��
	cout << "** vector �ߺ� ���� **" << endl << endl;

	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };
	
	cout << "myVector: ";
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}
	cout << endl << endl;


	sort(myVector.begin(), myVector.end());

	cout << "myVector sorted: ";
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}
	cout << endl << endl;


	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

	cout << "myVector unique: ";
	for (int i = 0;i < myVector.size();i++)
	{
		cout << myVector[i] << "\t";
	}
	cout << endl << endl;

	return 0;
}