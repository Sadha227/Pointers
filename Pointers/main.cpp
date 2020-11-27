#include <iostream>

using namespace std;

int main()
{
	int x = 100;
	int* px = &x;
	cout << "&x = " << px << endl;
	cout << "x = " << *px << endl;
	

	return 0;
}