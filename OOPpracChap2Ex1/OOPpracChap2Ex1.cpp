#include "Job.cpp"
int main() {
	int n,count=0;
	int max = 0, maxSinger = 0;
	string nameSinger;
	string name;
	cout << "Insert number of people: ";
	cin >> n;
	PEOPLE* list = new PEOPLE[n];

	for (int i = 0; i < n; i++) {
		list[i].INPUT();
		if (list[i].ROLESS() == 1) list[i].student();
		if (list[i].ROLESS() == 2) list[i].pupil();
		if (list[i].ROLESS() == 3) list[i].worker();
		if (list[i].ROLESS() == 4) list[i].actor();
		if (list[i].ROLESS() == 5) list[i].singer();
	}
	cout << "Import: " << PEOPLE::getCount();
	for (int i = 0; i < n; i++) {
		++count;
		list[0].findTheHigestSalary(list[i], n, count,max,maxSinger,nameSinger,name);
	}
	return 0;
}