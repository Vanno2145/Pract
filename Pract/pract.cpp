#include <iostream>

using namespace std;

struct Drob {
	int ch;
	int zn;
};

struct Human {
	char* name;
	char* surname;
	int age;
};

struct rectangle {
	int f_x = 2;
	int f_y = 2;

	int s_x = 5;
	int s_y = 4;
};

struct Point {
	int x;
	int y;
};

void Init(Human& obj)
{
	char buff[20];// ��������� �����
	cout << "Enter name -> ";
	cin >> buff;
	obj.name = new char[strlen(buff) + 1];
	strcpy(obj.name, buff);

	cout << "Enter surname -> ";
	cin >> buff;
	obj.surname = new char[strlen(buff) + 1];
	strcpy(obj.surname, buff);

	cout << "Enter age -> ";
	cin >> obj.age;

}

void Print(Human& obj)
{
	cout << "Name: " << obj.name << "\tSurname: " << obj.surname << "\tAge: " << obj.age << endl;
}

void Delete(Human& obj)
{
	delete[] obj.name;
	delete[] obj.surname;
}

void Minus(Drob a, Drob b) {
	cout << a.ch - b.ch << endl;
	cout << a.zn - b.zn << endl;
}

void Plus(Drob a, Drob b) {
	cout << a.ch + b.ch << endl;
	cout << a.zn + b.zn << endl;
}

void Division(Drob a, Drob b) {
	cout << a.ch / b.ch << endl;
	cout << a.zn / b.zn << endl;
}

void Multiple(Drob a, Drob b) {
	cout << a.ch * b.ch << endl;
	cout << a.zn * b.zn << endl;
}

int main() {
	setlocale(0, "ru");

	//Task 1


	/*Point A;
	cin >> A.x;
	cin >> A.y;
	cout << "Point A: " << A.x << "; " << A.y<<endl;

	Point B;
	cin >> B.x;
	cin >> B.y;

	cout << "Point B: " << B.x << "; " << B.y << endl;
	if (A.x == B.x) {
		cout << "����� ���������� ��� �";
	}
	else if (A.y == B.y) {
		cout << "����� ���������� ��� �";
	}*/

	//Task 2


	/*Point t;
	rectangle r;
	cin >> t.x >> t.y;

	cout << "Point t: " << t.x << "; " << t.y << endl;

	if (t.x > r.f_x && t.x < r.s_x && t.y > r.f_y && t.y < r.s_y) {
		cout << "����� ���������� � ��������������";
	}
	else {
		cout << "����� �� ���������� � ��������������";
	}*/


	//Task 3


	/*Human a;
	Init(a);
	Print(a);
	Delete(a);*/

	//Task 4

	/*rectangle rec;

	int choice;

	cout << "������ �������������� ������: " << rec.s_y - rec.f_y << "������ �������������� ������: " << rec.s_x - rec.f_x << endl;
	cout << "��� �� ������ � ��� �������? (1 - �����������; 2 - �������� ������)";

	cin >> choice;

	if (choice == 1) {
		int p;

		cout << "�� ������� ������ �� ������ ����������� �������������? ";
		cin >> p;

		cout << "1 - ����� ��� 2 - ���� ��� 3 - ������ ��� 4 - �����";
		int perem;
		cin >> perem;

		if (perem == 1) {
			rec.f_y += p;
			rec.s_y += p;
		}
		else if (perem == 2) {
			rec.f_y -= p;
			rec.s_y -= p;
		}
		else if (perem == 3) {
			rec.f_x += p;
			rec.s_x += p;
		}
		else if (perem == 4) {
			rec.f_x -= p;
			rec.s_x -= p;
		}
	}
	else if (choice == 2) {
		int s;
		cout << "��� �� ������ ��������? 1 - ������; 2 - ������";
		cin >> s;

		int n;
		cout << "�� ������� �� ������ ��������?";

		if (s == 1) {
			rec.s_x += n;
		}
		else if (s == 2) {
			rec.s_y += n;
		}
	}*/

	//Task 5 


	/*Drob a, b;

	cout << "������� ���������: " << endl;
	cin >> a.ch;
	cout << "������� �����������: " << endl;
	cin >> a.zn;

	cout << a.ch << endl << a.zn;

	cout << "������� ���������: " << endl;
	cin >> b.ch;
	cout << "������� �����������: " << endl;
	cin >> b.zn;

	cout << b.ch << endl << b.zn;
	
	int choice;

	cout << "1 - minus; 2 - plus; 3 - division; 4 - multiple";

	if (choice == 1) {
		Minus(a, b);
	}
	else if (choice == 2) {
		Plus(a, b);
	}
	else if (choice == 3) {
		Division(a, b);
	}
	else if (choice == 4) {
		Multiple(a, b);
	}*/
}





