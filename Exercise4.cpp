#include <iostream>
#include <list>

using namespace std;

void printList(list<int> myList);

int main()
{
	int count = 0;

	//1. myList 생성
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	printList(myList);

	//2. 4가 몇 개인지 출력
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
	{
		if (*it == 4)
		{
			count++;
		}
	}
	cout << "4는 " << count << "개 있습니다." << endl;

	//3~6은 리스트에만 존재하는 함수 사용
	//3. {1, 1, 2, 3, 4, 4, 5}가 나오도록 리스트 변경 후 출력
	myList.sort();
	printList(myList);

	//4. {1, 2, 3, 4, 5}가 나오도록 리스트 변경 후 출력
	myList.unique(); //unique는 필히 sort 후 사용
	printList(myList);

	//5. {1, 2, 3, 4, 5, 6, 7}가 나오도록 리스트 변경 후 출력
	list<int> myList1 = { 6, 7 };
	myList.splice(myList.end(), myList1);
	printList(myList);

	//6. {0, 1, 2, 3, 4, 5, 6, 7}가 나오도록 리스트 변경 후 출력
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