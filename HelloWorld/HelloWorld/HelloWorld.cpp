#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string arg_in{"none"};
	int count = argc;

	if (count == 2)
	{
		arg_in.erase();
		arg_in.assign(argv[count-1]);
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

	cout << right << argc << setw(16) << out << setw(16) << arg_in << endl;

	return 0;
}