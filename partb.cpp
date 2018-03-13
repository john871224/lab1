#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter an intrger:";
	cin >> n;
	cout << " n = " << n << endl;
	int counter = 1;
	while (n > 1 )
	{
		
		if (n % 2 == 0){ n = n / 2; }
        else{ n = 3*n + 1; }
		cout << " n = " << n << endl;
		++counter;
	}

	return 0;
}
