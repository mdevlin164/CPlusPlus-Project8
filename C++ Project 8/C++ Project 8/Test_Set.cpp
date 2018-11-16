#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	set<int> iset;
	iset.insert(5);
	iset.insert(9);
	iset.insert(1);
	iset.insert(8);
	iset.insert(3);

	cout << "iset contains: ";
	set<int>::iterator it;
	for (it = iset.begin(); it != iset.end(); it++)
		cout << " " << *it;
	cout << endl;

	int value;
	cout << "Enter a value to insert into the set: ";
	cin >> value;
	iset.insert(value);

	cout << "Updated set: ";
	set<int>::iterator it2;
	for (it2 = iset.begin(); it2 != iset.end(); it2++)
		cout << " " << *it2;
	cout << endl;

	int searchFor;
	cout << "Please enter a value to search for: " << endl;
	cin >> searchFor;
	if (binary_search(iset.begin(), iset.end(), searchFor))
		cout << "Found " << searchFor << endl;
	else
		cout << "Did not find " << searchFor << endl;

	return 0;
}