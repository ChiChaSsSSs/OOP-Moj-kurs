#include <iostream>
#include "GenerickiNiz.h"
#include "VagonException.h"
#include "Vagon.h"

using namespace std;

int main()
{
	try
	{
		GenerickiNiz<int, 3> a;
		GenerickiNiz<int, 3> b;

		cin >> a;
		cin >> b;
		cout << endl;

		GenerickiNiz<int, 3> c = a + b;
		cout << c;
		cout << c.Max();

		//GenerickiNiz<Vagon, 2> v1;
		//GenerickiNiz<Vagon, 2> v2;

		//cin >> v1;
		//cin >> v2;

		//GenerickiNiz<Vagon, 2> v = v1 + v2;
		//cout << v;

		//cout << v.Max();
	}
	catch (VagonException ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}