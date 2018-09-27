#include <iostream>
using namespace std; 
int main()
{
	char gurk[3] = {'A','B','C'};
	
	cout << gurk[0] << gurk[1] << gurk[2] << endl;
	char temp = gurk[0];
	gurk[0] = gurk[2];
	cout << gurk[0] << gurk[1] << gurk[2] << endl;
	gurk[2] = temp;
	cout << gurk[0] << gurk[1] << gurk[2] << endl;
	
	return 0;
	}
