#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream file("esempio.txt");
 
    if (!file) {
        cerr << "Uh oh, esempio.txt non può essere aperto!" << endl;
        return 1;
    }

    while (file)
    {
        string strInput;
        getline(file, strInput);
        cout << strInput << endl;
    }
    
    return 0;
}
