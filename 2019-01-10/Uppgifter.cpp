#include <iostream>
using namespace std;
int main ()
{
	int rod;
	int svart;
	int procent=100;

	
	cout << "Hur många svarta kulor finns det?" << endl;
	cin >> svart;
	cout << "Hur många röda kulor finns det?" << endl;
	cin >> rod;
	
	int total=rod+svart;
	int nytotal1=(rod/total)*procent;
	int nytotal2=(svart/total)*procent;
	
	cout << "Sannolikheten att du plockar upp en röd kula är " << nytotal1 << "%" << endl;
	cout << "Sannolikheten att du plockar upp en svart kula är " << nytotal2 << "%" << endl;
	
	
      return 0;
}
