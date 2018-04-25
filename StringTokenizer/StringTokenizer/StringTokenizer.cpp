#include "StringTokenizer.h"

using namespace std;

StringTokenizer::StringTokenizer()
{
}


StringTokenizer::~StringTokenizer()
{
}

StringTokenizer::StringTokenizer(string source)
{
	tekst = source;
	delim = "\n ";
	indeks = 0;
}

StringTokenizer::StringTokenizer(string source, string delimiters)
{
	tekst = source;
	delim = delimiters;
	indeks = 0;
}

bool StringTokenizer::isDelimiter(char tegn)
{
	bool test = false;
	for (int i = 0; i < delim.size(); i++)
	{
		if (tegn == delim.at(i))
			test = true;
	}

	return test;
}

bool StringTokenizer::hasMoreTokens()
{
	if (indeks != tekst.size())
		return true;
	
	bool test = true;
	
	for (int i = 0; i < delim.size(); i++)
	{
		if (tekst.at(indeks + 1) == delim.at(i))
			test = false;
	}
	
	return test;
	
}

string StringTokenizer::nextToken()
{
	string ret = "";

	if (!hasMoreTokens())
		return "";

	for (int i = indeks; i < tekst.size(); i++)
	{
		bool test = true;

		for (int j = 0; j < delim.size(); j++)
		{
			if (tekst.at(i) == delim.at(j))
				test = false;
		}

		if (test)
		{
			ret += tekst.at(i);
			indeks = indeks + i + 1;
		}
		else
			break;
	}
	return ret;
}

string StringTokenizer::nextToken(string delimiters)
{
	return "";
}

int StringTokenizer::getIndeks()
{
	return indeks;
}