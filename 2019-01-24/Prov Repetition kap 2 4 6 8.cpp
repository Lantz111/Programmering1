#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
	cout << RAND_MAX << endl;
	cout << time(NULL) << endl;
	srand(time(NULL));
	cout << (rand () % 6) + 1 << endl;
	
	
	return 0;
}

