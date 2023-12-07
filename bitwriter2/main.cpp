#include "pch.h"
#include <iostream>
#include <bitset>
using namespace winrt;
using namespace Windows::Foundation;
using namespace std;

int main()
{
	const double dec = pow(2, 24) - 1;
	const int bit = 24;

	for (int long n = 0; n <= dec; n++) {

		std::cout << "#define" << " " << "B" << std::bitset<bit>(n) << " " << std::dec << n << endl;

	}
	system("PAUSE");
	return 0;
}
