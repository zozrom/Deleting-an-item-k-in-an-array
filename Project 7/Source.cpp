#include <iostream>
#include<cstdlib>
using namespace  std;

int  main()
{
	int n;
	int array[100];
	int k, b = 0;
	cout << "Enter array" << endl;
	cin >> n;
	cout << "Enter numbers " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Number " << b + 1 << endl;
		cin >> array[i];
		b++;
	}
	
	do
	{
		cout << "K,what numbers need delite? " << endl;
		cin >> k;
		

	} while (k > n || k<=0 );
	k--;
	for (int i = k; i < n - 1; ++i)
		array[i] = array[i + 1];
	n--;

	cout << "Array after delite  : ";
	for (int i = 0; i < n; ++i)
		cout << array[i] << " ";
	return 0;

}
