#include <iostream>
#include "UnorderArray.h"
//#include "OrderArray.h"

using namespace std;

int main()
{
	UnorderArray<int> array(3);

	array.push(3);
	array.push(15);
	array.push(6);
	array.push(12); 		
	array.push(9); 

	array.pop();
	array.remove(2);

	cout << "Ordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	return 0;
}