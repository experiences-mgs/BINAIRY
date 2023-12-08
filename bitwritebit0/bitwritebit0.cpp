
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <bitset>

using namespace std;


int main() {
	ofstream myfile;
	myfile.open("binary24bits.h");
	const double dec = pow(2, 24) - 1;
	const int bit = 24;
myfile << "#ifndef BINARY_H" << endl;
	myfile << "#define BINARY_H" << endl;
	myfile << "#include <arduino.h>" << endl;
	for (int long n = 0; n <= dec; n++) {
		myfile << "#define" << " " << "B" << std::bitset<bit>(n) << " " << std::dec << n << endl;
	}
	myfile << "#endif" << endl;
	myfile.close();
	return 0;
}
