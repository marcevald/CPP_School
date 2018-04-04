#include <string>

using namespace std;

class Museum 
{
public:
	Museum(string, string);
	~Museum();
	Museum();

protected:
	string navn;
	string adresse;
};