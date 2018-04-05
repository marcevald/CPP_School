#include <string>

using namespace std;

class KunstvaerkSamling
{
public:
	KunstvaerkSamling(string);
	void addKunstvaerk();

	KunstvaerkSamling();
	~KunstvaerkSamling();
protected:
	//KunstVaerk Kunstvaerker;
	string navn;
};