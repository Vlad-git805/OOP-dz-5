#include "Worker.h"

bool Worker::CheckStaryYear(int startYear)const
{
	return (startYear > 0);
}

bool Worker::CheckSalary(double salary)const
{
	return (salary > 0);
}

Worker::Worker() : startYear(0), salary(0), type(NONE)
{
	strcpy_s(name, "No name");
}

Worker::Worker(const char * name, const int startYear, const double salary, const WorkerType type)
{
	if (CheckSalary(salary) == true && CheckStaryYear(startYear) == true)
	{
		strcpy_s(this->name, name);
		this->startYear = startYear;
		this->salary = salary;
		this->type = type;
	}
	else
	{
		strcpy_s(this->name, "No name");
		this->startYear = 0;
		this->salary = 0;
		this->type = NONE;
	}
}

void Worker::SetName(const char * name)
{
	strcpy_s(this->name, name);
}

void Worker::SetStartYear(const int startYear)
{
	if(CheckStaryYear(startYear)) this->startYear = startYear;
}

void Worker::SetSalary(const double salary)
{
	if (CheckSalary(salary)) this->salary = salary;
}

void Worker::SetType(WorkerType type)
{
	this->type = type;
}

const char *Worker::GetName() const
{
	return this->name;
}

const int Worker::GetStartYear()const
{
	return this->startYear;
}

const double Worker::GetSalary()const
{
	return this->salary;
}

const WorkerType Worker::GetType()const
{
	return type;
}

void Worker::PrintShortInfo()const
{
	cout << "_____________________________________________________" << endl;
	cout << "Name: " << name << endl;
	cout << "Salary: " << salary << endl;
}

void Worker::PrintFullInfo()const
{
	cout << "_____________________________________________________" << endl;
	cout << "Name: " << name << endl;
	cout << "Stat year: " << startYear << endl;
	cout << "Salary: " << salary << endl;
	cout << "Type: " << type << endl;
}

Worker::~Worker()
{

}


