#pragma once
#include <iostream>
#include "Worker.h"

using namespace std;

class Department
{
private:
	Worker * workers;
	int workerCount;
	bool check(int size)const;
public:
	Department();
	Department(const Department&other);
	void AddWorker(const Worker &w);
	void ShowWorkers()const;
	void PrintByName(const char * name)const;
	double GetAverageSalaty();
	void PrintByType(const WorkerType type) const;
	void PrintByExperience(const int exp);
	~Department();
};