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
	char buff[20];// временный буфер
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
		cout << "Тачки паралельны оси Х";
	}
	else if (A.y == B.y) {
		cout << "Точки паралельны оси У";
	}*/

	//Task 2


	/*Point t;
	rectangle r;
	cin >> t.x >> t.y;

	cout << "Point t: " << t.x << "; " << t.y << endl;

	if (t.x > r.f_x && t.x < r.s_x && t.y > r.f_y && t.y < r.s_y) {
		cout << "Точка находиться в прямоугольнике";
	}
	else {
		cout << "Точка не находиться в прямоугольнике";
	}*/


	//Task 3


	/*Human a;
	Init(a);
	Print(a);
	Delete(a);*/

	//Task 4

	/*rectangle rec;

	int choice;

	cout << "Высота прямоугольника сейчас: " << rec.s_y - rec.f_y << "Ширина прямоугольника сейчас: " << rec.s_x - rec.f_x << endl;
	cout << "Что вы хотите с ним сделать? (1 - переместить; 2 - изменить размер)";

	cin >> choice;

	if (choice == 1) {
		int p;

		cout << "на сколько клеток вы хотите переместить прямоугольник? ";
		cin >> p;

		cout << "1 - вверх или 2 - вниз или 3 - вправо или 4 - влево";
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
		cout << "Что вы хотите изменить? 1 - ширину; 2 - высоту";
		cin >> s;

		int n;
		cout << "На сколько вы хотите изменить?";

		if (s == 1) {
			rec.s_x += n;
		}
		else if (s == 2) {
			rec.s_y += n;
		}
	}*/

	//Task 5 


	/*Drob a, b;

	cout << "Введите числитель: " << endl;
	cin >> a.ch;
	cout << "Введите знаменатель: " << endl;
	cin >> a.zn;

	cout << a.ch << endl << a.zn;

	cout << "Введите числитель: " << endl;
	cin >> b.ch;
	cout << "Введите знаменатель: " << endl;
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





