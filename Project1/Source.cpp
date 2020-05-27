#include <iostream>
#include "Worker.h"
#include "Department.h"

using namespace std;

int main()
{

	Worker w1("Vlad", 2016, 2500, ADMIN);
	Worker w2("Vas9", 2009, 4000, PROGRAMMER);
	Worker w3("San9", 50, 500, DESIGNER);

	Department flex;
	flex.AddWorker(w1);
	flex.AddWorker(w2);
	flex.AddWorker(w3);
	flex.ShowWorkers();
	cout << endl;
	cout << flex.GetAverageSalaty();
	cout << endl << endl;
	cout << endl;
	flex.PrintByExperience(10);
	/*flex.PrintByName("Vlad");
	cout << endl;
	flex.PrintByType(PROGRAMMER);
	cout << endl<<endl;
	Department Air(flex);
	Air.ShowWorkers();*/


	/*Worker w3("San9", 2019, -5, DESIGNER);

	w3.PrintShortInfo();

	Department flex;
	flex.AddWorker(w3);*/
	system("pause");
	return 0;
}