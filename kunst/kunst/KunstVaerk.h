#include <string>
#include "Person.h"

using namespace std;

class KunstVaerk
{
public:
	KunstVaerk();
	~KunstVaerk();

	Person ophavsMaend;
	void addOM(Person); // Add ophavsmand

	string getOphavsMaend(); // Get ophavsmaend ----EKSTRA----

protected:
	string titel;
	int aar;

};