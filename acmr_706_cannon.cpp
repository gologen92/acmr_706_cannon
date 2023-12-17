#include<iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string fname = "INPUT.TXT";
	string oname = "OUTPUT.TXT";
	double r, x, y;
	ifstream fileInput(fname);
	ofstream fileOutput(oname);
	
	if (fileInput.is_open())
	{
		cout << "Файл открыт" << endl;
		fileInput >> r >> x >> y;
	}
	if (x < 0)
		x = -x;
	fileOutput << r * x / (2 * r - y) << endl;
	fileOutput.close();

}