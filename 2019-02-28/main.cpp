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
	double hojd;
	cout << "Mata in höjden på din cylinder: ";
	cin >> hojd;
	
	double area = AreaBerakning(radie);
	
	double volym;
	volym = area * hojd;
	
	
	cout << "Volymen på din cylinder är " << volym << " kubikcentimeter.";
	
	return 0;
}


    double AreaBerakning(double radie){
		
	double area;
	area = radie * radie * 3.14;
	
	   return area;
		
	}
	
	/* double Areaberakning(double volym){
		
	double volym;
	volym = area * hojd;
	
	    return volym; 
	}*/
