#include <iostream>


using namespace std;



class Person
{
        private : 
		string martial_status;


	public:
		int id;
		string name;
		float age;
		string gender;

		void getDetails(void);
		void setDetails(void);	



};



void Person::getDetails(void)
{
	cout << "id : " << id << endl;
	cout << "name : " << name << endl;
	cout << "age : " << age << endl;
	cout << "gender :  " << gender << endl;
	cout << "martial status : " << martial_status << endl; 

}

void Person::setDetails(void)
{
	cout << "id :" ;
	cin >> id;
	cout << endl;
	cout << "name : " ;
	cin >> name;
	cout << endl;
	cout << "age : " ;
	cin >> age;
	cout << endl;
	cout << "gender : ";
	cin >> gender;
	cout << endl;
	cout << "married / unmarried : ";
	cin >> martial_status;


}

int main(void)
{
	Person *p = new Person;
	p->setDetails();
	p->getDetails();
	delete p;

}


