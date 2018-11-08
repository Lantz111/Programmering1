#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main ()

{
	
	int tal1, tal2;
	cout << "Skriv in två tal" << endl;
	cout << "Första talet: ";
	cin >> tal1;
	cout << "Andra talet: ";
	cin >> tal2;
    
    if (tal1 > tal2)
    {
		cout << "Det första talet är störst " << tal1 << endl;
	}
	
	else
	{
		cout << tal2 << endl;
	}
	
	
	
	return 0;
}
