#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	do
	{
		cout << i << " ";
			i *= 2;
	} while (i <= 512);

	return 0;
}