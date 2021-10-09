#include <iostream>
//#include "UnorderArray.h"
//#include "OrderArray.h"

using namespace std;

int main()
{
	OrderArray<int> array(3);

	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23); 		
	array.push(82); 

	array[2] = 112;

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