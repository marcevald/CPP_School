#include <string>

using namespace std;

class Person

{
public:
	~Person();
	Person();

	Person(string, string, int, int);
protected:
	string navn;
	string nationalitet;
	int foedeaar;
	int doedsaar;
};