#include <iostream>
using namespace std; 
int main()
{   
	int gurka[4];
	
	cout << "Mata in fyra heltal" << endl;
	cin >> gurka[0] >> gurka[1] >> gurka[2] >> gurka[3];
	cout << gurka[0] <<' '<< gurka[1] <<' '<< gurka[2] <<' '<< gurka[3] << endl;
	
	int val;
	cout << "Byt värde 1, 2, 3 eller 4" << endl;
	cout << "Mata in nytt värde" << endl;
	cin >> gurka;
	cin >> gurka[val-1];
	cout << gurka[0] <<' '<< gurka[1] <<' '<< gurka[2] <<' '<< gurka[3] << endl;
	
	return 0;
}   
