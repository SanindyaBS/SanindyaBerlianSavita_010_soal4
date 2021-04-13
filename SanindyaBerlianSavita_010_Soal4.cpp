#include<iostream>
using namespace std;

#define MAX 10

class student{
	private:
	char name[30];
	char address[50];
	int telephone_number;
	public:
		//member function to get student's details
		void getDetails(void);
		//member function to print student's details
		void putDetails(void);
};

//member function definition, outside of the class 
void student::getDetails(void){
	cout<<"Enter Name :";
	cin>>name;
	cout<<"Enter address :";
	cin>>address;
	cout<<"Enter telephone number :";
	cin>>telephone_number;

}

//member function definition, outside of the class
void student::putDetails(void){
	cout<<"Student details :\n";
	cout<<"Name :"<<name<<endl;
	cout<<"Address :"<<address<<endl;
	cout<<"Telephone Number :"<<telephone_number<<endl;
}

int main()
{
	student std[MAX]; //array ofobject creation
	int n,loop;
	
	cout<<"Enter total number of student :";
	cin>>n;
	
	for(loop=0;loop<n;loop++){
		cout<<"Enter details of student "<<loop+1<<":\n";
		std[loop].getDetails();
	}
	cout<<endl;
	
	for(loop=0;loop<n;loop++){
		cout<<"Details of student "<<(loop+1)<<":\n"<<endl;
		std[loop].putDetails();
	}
	
	return 0;
}
