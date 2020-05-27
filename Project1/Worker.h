#pragma once
#include <iostream>

using namespace std;

enum WorkerType
{
	NONE,
	DIRECTOR,
	ADMIN,
	PROGRAMMER,
	DESIGNER
};

class Worker
{
	char name[50];
	int startYear;
	double salary;
	WorkerType type;
	bool CheckStaryYear(int startYear)const;
	bool CheckSalary(double salary)const;
public:
	Worker();
	Worker(const char * name, const int startYear, const double salary, const WorkerType type);
	void SetName(const char * name);
	void SetStartYear(const int startYear);
	void SetSalary(const double salary);
	void SetType(WorkerType type);
	const char *GetName() const;
	const int GetStartYear()const;
	const double GetSalary()const;
	const WorkerType GetType()const;
	void PrintShortInfo()const;
	void PrintFullInfo()const;
	~Worker();
};