#include <string>
#include <vector>


using namespace std;

class KunstvaerkSamling
{
public:
	KunstvaerkSamling(string);
	void addKunstvaerk(KunstVaerk);

	KunstvaerkSamling();
	~KunstvaerkSamling();
protected:
	vector<KunstVaerk> kunstvaerker;
	string navn;
};
