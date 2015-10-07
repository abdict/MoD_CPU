#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	string out{ "Hello World !" };

	cout << setw(16) << right << out << endl;

	return 0;
}