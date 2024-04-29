#include <iostream>
#include <list>

using namespace std;

void printList(list<int> myList);

int main()
{
	int count = 0;

	//1. myList ����
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	printList(myList);

	//2. 4�� �� ������ ���
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
	{
		if (*it == 4)
		{
			count++;
		}
	}
	cout << "4�� " << count << "�� �ֽ��ϴ�." << endl;

	//3~6�� ����Ʈ���� �����ϴ� �Լ� ���
	//3. {1, 1, 2, 3, 4, 4, 5}�� �������� ����Ʈ ���� �� ���
	myList.sort();
	printList(myList);

	//4. {1, 2, 3, 4, 5}�� �������� ����Ʈ ���� �� ���
	myList.unique(); //unique�� ���� sort �� ���
	printList(myList);

	//5. {1, 2, 3, 4, 5, 6, 7}�� �������� ����Ʈ ���� �� ���
	list<int> myList1 = { 6, 7 };
	myList.splice(myList.end(), myList1);
	printList(myList);

	//6. {0, 1, 2, 3, 4, 5, 6, 7}�� �������� ����Ʈ ���� �� ���
	list<int> myList2 = { 0 };
	myList.splice(myList.begin(), myList2);
	printList(myList);

	return 0;
}

void printList(list<int> myList)
{
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}