#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	//중복삭제 unique : iterator 활용
	cout << "** vector 중복 삭제 **" << endl << endl;

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