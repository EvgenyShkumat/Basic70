#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void deleteSpaces(string& s) {
	for (int i = 0; i < s.length();)
	{
		if (s[i] == ' ' && s[i] == s[i + 1]) {
			s.erase(i, 1);
		}
		else {
			i++;
		}
	}
}

void deleteExtraSpaces() {
	ifstream fin("input.txt");
	string buf = "";
	string result = "";

	if (!fin.fail()) {
		while (!fin.eof()) {
			getline(fin, buf);
			deleteSpaces(buf);
			result += buf + "\n";
		}
	}

	ofstream fout("output.txt");

	if (!fout.fail()) {
		fout << result;
		fout.close();
	}
}

