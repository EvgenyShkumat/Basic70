#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string output() {
	setlocale(LC_ALL, "Russian");

	ifstream fin("input.txt");
	string buf = "";
	string result = "";

	if (!fin.fail()) {
		while (!fin.eof()) {
			getline(fin, buf);
			result += buf;
		}

		fin.close();
	}

	return result;
}