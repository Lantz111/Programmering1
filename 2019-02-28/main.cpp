#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

double AreaBerakning(double radie);

int main ()
{
	double radie;
	cout << "Mata in radien på din cylinders basyta i centimeter: ";
	cin >> radie;
	
	double area = AreaBerakning(radie);
	
	cout << "Arean på din cylinders basyta är " << area << " kvadratcentimeter.";
	
	return 0;
}


    double AreaBerakning(double radie){
		
	double area;
	area = radie * radie * 3.14;
		
		
		return area;
	}
