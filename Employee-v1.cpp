
#include <iostream>
using namespace std;

int main()
{
	string name[10];
	int age[10];
	int salary[10];
	char gender[10];
	int input;
	int i = 0;
	while (i >= 0) {
		cout << "Enter your choice: " << endl;
		cout << "1) Add new employee" << endl;
		cout << "2) Print all employees" << endl;
		cout << "3) Delete by age" << endl;
		cout << "4) Ubdate salary by name" << endl;

		cin >> input;

		switch (input) {

		case 1:
			cout << "Enter your name: ";
			cin >> name[i];

			cout << "Enter age: ";
			cin >> age[i];

			cout << "Enter salary: ";
			cin >> salary[i];

			cout << "Enter gender(M/F): ";
			cin >> gender[i];
			break;
		case 2:
			for (int i = 0; i < 10; i++) {
				cout << name[i] << " " << age[i] << " " << salary[i] << " " << gender[i] << "\n";
			}
			break;
		case 3:
			int s, e;
			cout << "Enter start and end age: ";
			cin >> s >> e;
			for (int i = 0; i < 10; i++)
				if (s <= age[i] && age[i] <= e) {
					name[i] = '\0';
					age[i] = 0;
					salary[i] = 0;
					gender[i] = '\0';


				}
			break;
		case 4:
			cout << "Enter your name & salary: ";
			string Name; int Salary;
			cin >> Name >> Salary;
			for (int i = 0; i < 10; i++) {
				if (name[i] == Name)
					salary[i] = Salary; break;
			}
			break;
		}
		i++;
	}
}


