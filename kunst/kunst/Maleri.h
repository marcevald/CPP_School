#include <string>
#include "KunstVaerk.h"


using namespace std;

class Maleri: protected KunstVaerk
{
public:
	Maleri(string, int, int, int);
	~Maleri();
	Maleri();

protected:
	int laengde;
	int bredde;
};