#include <iostream>
using namespace std;

void main()
{
	int n = 0;
	int DiagonalNum = 0;

	cout << "How many ribs does your polygon have?" << endl;
	cin >> n;

	DiagonalNum = 0.5*n*(n - 3);

	cout << "There is " << DiagonalNum << " diagonal in your " << n << " ribs polygon";
	
	int i;
	cin >> i;
}