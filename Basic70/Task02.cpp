#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sum() {
	ifstream fin("input.txt");
	int sum = 0;
	int number;

	if (!fin.fail()) {
		while (!fin.eof()) {
			fin >> number;
			sum += number;
		}
		fin.close();
	}

	ofstream fout("output.txt");
	
	if (!fout.fail()) {
		fout << sum;
		fout.close();
	}
}
