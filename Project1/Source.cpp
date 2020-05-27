#include <iostream>
#include "Worker.h"
#include "Department.h"

using namespace std;

int main()
{

	Worker w1("Vlad", 2016, 2500, ADMIN);
	Worker w2("Vas9", 2010, 4000, PROGRAMMER);
	Worker w3("San9", 2019, 500, DESIGNER);

	w1.PrintShortInfo();

	Department flex;
	flex.AddWorker(w1);
	flex.AddWorker(w2);
	flex.AddWorker(w3);
	flex.ShowWorkers();
	cout << endl;
	cout << flex.GetAverageSalaty();
	cout << endl << endl;
	flex.PrintByName("Vlad");
	cout << endl;
	flex.PrintByType(PROGRAMMER);
	cout << endl<<endl;
	Department Air(flex);
	Air.ShowWorkers();
	system("pause");
	return 0;
}