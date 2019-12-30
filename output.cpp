#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile;
	
	myfile.open("esempio.txt");
	myfile << "ciao!" << endl;
	myfile.close();

	return 0;
}

