#include <iostream>
#include <string>
using namespace std;
int main()

{
	/*cout << "skriv ett digitalt klockslag" << endl;
	string klocka;
	getline(cin, klocka);
	string timma = klocka.substr(0,2);
	string minut = klocka.substr(3,2);
	cout << timma << endl << minut << endl; */
	
	string fornamn;
	cout << "Skriv ditt förnamn" << endl;
	getline(cin, fornamn);
	string efternamn; 
	cout << "Skriv ditt efternamn" << endl;
	getline(cin, efternamn);
	cout << efternamn << ", " << fornamn << endl;
	
	 
	
	
	return 0;		
}
