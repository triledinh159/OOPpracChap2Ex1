#pragma once
#include<iostream>
using namespace std;
class STUDENT {
	int ID;
	char CLASS[100];
	char TELENUM[100];
	char SCHOOL[100];
	char FACULTY[100];
public:
	void student();
	void OUTPUT();
	
};
class PUPIL  {
	int ID;
	char CLASS[100];
	char TELENUM[100];
	char SCHOOL[100];
public:
	void pupil();
	void OUTPUT();
};
class WORKER  {
	char WORKPLACE[100];
public:
	int SALARY;
	void worker();
	void OUTPUT();
};
class ACTOR  {
	char ARTKIND[100];
	int WORKAGE;
public:
	int SALARY;
	void actor();
	void OUTPUT();
};
class SINGER  {
	int WORKAGE;
	char MUSICKIND[100];
	int SOLDDISK;
	int SHOW;
public:
	int SALARY;
	void singer();
	bool FAMOUS();
	void OUTPUT();
};
class PEOPLE :public STUDENT,public WORKER,public PUPIL,public ACTOR,public SINGER{
	char NAME[20];
	int ID;
	int DAY;
	int MONTH;
	int YEAR;
	char HOMETOWN[20];
	int ROLES;
public:
	static int COUNT;
	void INPUT();
	void ROLE();
	int ROLESS();
	void OUTPUT();
	void findTheHigestSalary(PEOPLE listA, int n, int& count, int& max, int& maxSinger, string& nameSinger, string &name);
	static int getCount() {
		return COUNT;
	}
};
int PEOPLE::COUNT = 0;