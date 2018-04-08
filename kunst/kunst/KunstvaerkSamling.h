#include <string>
#include <vector>
#include "Maleri.h"


using namespace std;

class KunstvaerkSamling
{
public:
	KunstvaerkSamling(string);
	void addKunstvaerk(KunstVaerk kunst);
	
	KunstvaerkSamling();
	~KunstvaerkSamling();
protected:
	vector<KunstVaerk> kunstvaerker;
	string navn;
};
 