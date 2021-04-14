#include "Student.h"
using namespace std;
int main()
{

	cout << "Number of objects of class Man: " << Object::Count() << endl;
	Man a;
	cout << "Number of objects of class Man: " << Object::Count() << endl;
	Man b;
	cout << "Number of objects of class Man: " << Object::Count() << endl;
	Man c;
	cout << "Number of objects of class  Man: " << Object::Count() << endl;
	int result;
	Student s1;
	Student s4("Vasyl", 20, "IT", 2010);
	cout << s4 << endl;
	s1 = ++s4;
	cout << s4 << endl;
	s1 = s4++;
	cout << s4 << endl;

	return 0;
}