#include <string>
#include "KunstVaerk.h"

using namespace std;

class Komposition: protected KunstVaerk
{
public:
	Komposition();
	~Komposition();

	Komposition(string, int, string, int);

protected:
	string genre;
	int spilletid;
};