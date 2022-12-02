#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	// Creates a vector of size 8 with all initial
	// values as 1.
	vector<int> vect(8, 1);

	for (int i=0; i<vect.size(); i++)
	cout << ' ' << vect[i];
}

