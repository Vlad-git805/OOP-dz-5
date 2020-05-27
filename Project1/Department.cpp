#include "Department.h"

bool Department::check(int size)const
{
	return (size > 0);
}

Department::Department() : workers(nullptr), workerCount(0) {}

Department::Department(const Department&other)
{
	
	this->workerCount = other.workerCount;
	this->workers = new Worker[workerCount];
	for (int i = 0; i < workerCount; i++)
	{
		this->workers[i] = other.workers[i];
	}
	
}

void Department::AddWorker(const Worker &w)
{
	Worker *temp = new Worker[workerCount + 1];
	for (int i = 0; i < workerCount; i++)
	{
		temp[i] = this->workers[i];
	}
	temp[workerCount] = w;
	delete[]workers;
	workerCount++;
	workers = temp;
}

void Department::ShowWorkers()const
{
	if (check(workerCount))
	{
		for (int i = 0; i < workerCount; i++)
		{
			workers[i].PrintFullInfo();
		}
	}
	else
	{
		cout << "No workers" << endl;
	}
}

void Department::PrintByName(const char * name)const
{
	if (check(workerCount))
	{
		for (int i = 0; i < workerCount; i++)
		{
			if (strcmp(workers[i].GetName(), name) == 0)
			{
				workers[i].PrintFullInfo();
			}
		}
	}
}

double Department::GetAverageSalaty()
{
	if (check(workerCount))
	{
		double avg = 0;
		for (int i = 0; i < workerCount; i++)
		{
			avg += workers[i].GetSalary();
		}
		return avg /= workerCount;
	}
}

void Department::PrintByType(const WorkerType type) const
{
	if (check(workerCount))
	{
		for (int i = 0; i < workerCount; i++)
		{
			if (workers[i].GetType() == type)
			{
				workers[i].PrintFullInfo();
			}
		}
	}
}

void Department::PrintByExperience(const int exp)
{
	if (check(workerCount))
	{
		for (int i = 0; i < workerCount; i++)
		{
			int workExp = 2020 - workers[i].GetStartYear();
			if (workExp > exp)
			{
				workers[i].PrintFullInfo();
			}
		}
	}
}

Department::~Department()
{
	if (workers != nullptr)
		delete[]workers;
}