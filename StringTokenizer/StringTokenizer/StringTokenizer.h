#pragma once
#include <string>

using namespace std;

class StringTokenizer
{
public:
	StringTokenizer();
	~StringTokenizer();

	StringTokenizer(string);
	StringTokenizer(string, string);

	bool isDelimiter(char);
	bool hasMoreTokens();

	string nextToken();
	string nextToken(string);

	int getIndeks();

private:
	string tekst;
	string delim;
	int indeks;
};

