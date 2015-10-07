#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string arg_in;
	int count = argc;

	if (count >= 2)
	{
		arg_in.assign(argv[--count]);
		if (arg_in == "-p")
		{
			cout << "There are only " << argc << " flags associated with current run." << endl;
		}
		else
		{
			cout << "the flag argument " << arg_in << " is not recognized!" << endl;
		}
	}

	string out{ "Hello World !" };

	cout << setw(16) << right << out << endl;

	return 0;
}